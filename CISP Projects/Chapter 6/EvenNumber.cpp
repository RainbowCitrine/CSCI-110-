#include <iostream> 

class EvenNumber
{
    public: 
    EvenNumber()
    {
        value = 0; 
    }
    EvenNumber(int newValue)
    {
        value = newValue; 
    }
    int getValue()
    {
        return value; 
    }
    EvenNumber getNext()
    {
        return EvenNumber(value + 2); 
    }
    EvenNumber getPrevious()
    {
        return EvenNumber(value - 2); 
    }
    private: 
    int value; 
    
};

int main()
{
    EvenNumber num(16); 
    std::cout << num.getValue() << std::endl;
    std::cout << num.getNext().getValue() << std::endl;
    std::cout << num.getPrevious().getValue() << std::endl;
     
}
