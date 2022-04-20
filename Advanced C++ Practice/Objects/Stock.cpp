/*
(The Stock class) Design a class named Stock that contains the following:

A string data field named symbol for the stock’s symbol.
A string data field named name for the stock’s name.
A double data field named previousClosingPrice that stores the stock price for the previous day.
A double data field named currentPrice that stores the stock price for the current time.
A constructor that creates a stock with specified symbol and name.
The constant accessor functions for all data fields.
The mutator functions for previousClosingPrice and currentPrice.
A constant function named getChangePercent() that returns the percentage changed from previousClosingPrice to currentPrice.
Write a test program that creates a Stock object with the stock symbol MSFT, the name Microsoft Corporation, 
and the previous closing price of 27.5. 
Set a new current price to 27.6 and display the price-change percentage.
*/

//My Solution 

#include <iostream> 
#include <string> 

class Stock
{
public: 
    
    std::string symbol; 
    std::string name; 

    Stock(std::string x, std::string y, double c, double e)
    {
        symbol = x; 
        name = y; 
        previousClosingPrice = c; 
        currentPrice = e; 
    }
    std::string getSymbol()
    {
        return symbol; 
    }
    std::string getName()
    {
        return name; 
    }

    double getPercentChange()
    {
        return (previousClosingPrice - currentPrice) / previousClosingPrice * 100;
    }

    void setCurrentPrice(double newCurrentPrice)
    {
        currentPrice = newCurrentPrice; 
    }
    void setPreviousClosingPrice(double newPreviousClosingPrice)
    {
        previousClosingPrice = newPreviousClosingPrice; 
    }
    double getPreviousPrice()
    {
        return previousClosingPrice; 
    }
    double getCurrentPrice()
    {
        return currentPrice; 
    }
    

private: 
    double percentChange;
    double currentPrice; 
    double previousClosingPrice;  
};

int main()
{
    std::string a = "Microsoft Corporation";
    std::string b = "MSFT"; 
    double z; 
    double x; 
    double y;
    std::cout << "Enter the previous stock price: "; 
    std::cin >> z; 
    std::cout << "Enter the current price: "; 
    std::cin >> x; 

    Stock names(a, b, z, x); 

    
   std::cout << "The symbol of the company is: " << names.getSymbol() << std::endl; 
   std::cout << "The name of the company is: " << names.getName() << std::endl;   
   std::cout << "The previous price is: " << names.getPreviousPrice() << std::endl; 
   std::cout << "The current price is: "<< names.getCurrentPrice() << std::endl; 
   std::cout << "The percentage changee: "<<names.getPercentChange() << std::endl; 
   
   
}

