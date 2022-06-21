#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
#ifndef STACK_H
#define STACK_H
template<typename T>
class Stack
{
public:
  Stack();
  bool empty() const;
  T peek() const;
  void push(T value);
  T pop();
  int getSize() const;
private:
  vector<T> elements;
};
template<typename T>
Stack<T>::Stack()
{
}
template<typename T>
bool Stack<T>::empty() const
{
  return elements.size() == 0;
}
template<typename T>
T Stack<T>::peek() const
{
  return elements[elements.size() - 1];
}
template<typename T>
void Stack<T>::push(T value)
{
  elements.push_back(value);
}
template<typename T>
T Stack<T>::pop()
{
  T temp = elements[elements.size() - 1];
  elements.pop_back();
  return temp;
}
template<typename T>
int Stack<T>::getSize() const
{
  return elements.size();
}
#endif
#include <string>
#include <cctype>
using namespace std;
vector<string> split(const string& expression);
int evaluateExpression(const string& expression);
void processAnOperator(
  Stack<int>& operandStack, Stack<char>& operatorStack);
int main()
{
  string expression;
  cout << "Enter an expression: ";
  getline(cin, expression);
  cout << expression << " = "
    << evaluateExpression(expression) << endl;
  return 0;
}
vector<string> split(const string& expression)
{
  vector<string> v; // A vector to store split items as strings
  string numberString; // A numeric string
  for (unsigned int i = 0; i < expression.length(); i++)
  {
    if (isdigit(expression[i]))
      numberString.append(1, expression[i]); // Append a digit
    else
    {
      if (numberString.size() > 0)
      {
        v.push_back(numberString); // Store the numeric string
        numberString.erase(); // Empty the numeric string
      }
      if (!isspace(expression[i]))
      {
        string s;
        s.append(1, expression[i]);
        v.push_back(s); // Store an operator and parenthesis
      }
    }
  }
  if (numberString.size() > 0)
    v.push_back(numberString);
  return v;
}
int evaluateExpression(const string& expression)
{
  // Create operandStack to store operands
  Stack<int> operandStack;
  // Create operatorStack to store operators
  Stack<char> operatorStack;
  // Extract operands and operators
  vector<string> tokens = split(expression);
  // Phase 1: Scan tokens
  for (unsigned int i = 0; i < tokens.size(); i++)
  {
    if (tokens[i][0] == '+' || tokens[i][0] == '-')
    {
      while (!operatorStack.empty() && (operatorStack.peek() == '+'
        || operatorStack.peek() == '-' || operatorStack.peek() == '*'
        || operatorStack.peek() == '/' || operatorStack
        .peek() == '^' || operatorStack.peek() == '%'))
      {
        processAnOperator(operandStack, operatorStack);
      }
      operatorStack.push(tokens[i][0]);
    }
    else if (tokens[i][0] == '*' || tokens[i][0] == '/' 
      || tokens[i][0] == '%')
    {
      while (!operatorStack.empty() && (operatorStack.peek() == '*'
        || operatorStack.peek() == '/' 
        || operatorStack.peek() == '%' || operatorStack.peek() == '^'))
      {
        processAnOperator(operandStack, operatorStack);
      }
      operatorStack.push(tokens[i][0]);
    }
    else if (tokens[i][0] == '^') {
      while (!operatorStack.empty()
        && operatorStack.peek() == '^') {
        processAnOperator(operandStack, operatorStack);
      }
      operatorStack.push(tokens[i][0]);
    }
    else if (tokens[i][0] == '(')
    {
      operatorStack.push('('); // Push '(' to stack
    }
    else if (tokens[i][0] == ')')
    {
      while (operatorStack.peek() != '(')
      {
        processAnOperator(operandStack, operatorStack);
      }
      operatorStack.pop(); // Pop the '(' symbol from the stack
    }
    else
    { 
      operandStack.push(atoi(tokens[i].c_str()));
    }
  }
  while (!operatorStack.empty())
  {
    processAnOperator(operandStack, operatorStack);
  }
  return operandStack.pop();
}
void processAnOperator(
  Stack<int>& operandStack, Stack<char>& operatorStack)
{
  char op = operatorStack.pop();
  int op1 = operandStack.pop();
  int op2 = operandStack.pop();
  if (op == '+')
    operandStack.push(op2 + op1);
  else if (op == '-')
    operandStack.push(op2 - op1);
  else if (op == '*')
    operandStack.push(op2 * op1);
  else if (op == '/')
    operandStack.push(op2 / op1);
  else if (op == '%')
    operandStack.push(op2 % op1);
  else if (op == '^')
    operandStack.push(static_cast<int>(floor(pow(op2, op1)))); 
}
