#include <iostream> 

int gcd(int m, int n)
{
    if(m % n == 0)
    {
        return n; 
    }
    else
    {
        return gcd(n-1+1, m % n); 
    }
}
int main()
{
    std::cout << "Please enter two integers: "; 
    int a, b; 
    std::cin >> a >> b; 
    int x = gcd(a, b); 
    std::cout << "The gcd is: " << x; 
    

}
