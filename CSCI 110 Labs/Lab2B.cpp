#include <iostream> 

int main()
{
    int counter = 0; 
    int counter2 = 0; 
    int counter3 = 0; 
    int counter4 = 0; 

    int size = 4; 
    std::cout << "Please enter four separate words: ";  
    std::string x; 
    std::string y; 
    std::string z; 
    std::string a; 
    std::cin >> x; 
    std::cin >> y; 
    std::cin >> z; 
    std::cin >> a; 
    
   

    for(int i = 0; i < x.length(); ++i )
    {
        if(x[i] == 'a'|| x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' || x[i] == 'w' || x[i] == 'y')
        {
            counter += 1; 

        }
    }


     for(int i = 0; i < y.length(); ++i )
    {
        if(y[i] == 'a'|| y[i] == 'e' || y[i] == 'i' || y[i] == 'o' || y[i] == 'u' || y[i] == 'w' || y[i] == 'y')
        {
            counter2 += 1; 

        }
    
    }

      for(int i = 0; i < z.length(); ++i )
    {
        if(z[i] == 'a'|| z[i] == 'e' || z[i] == 'i' || z[i] == 'o' || z[i] == 'u' || z[i] == 'w' || z[i] == 'y')
        {
            counter3 += 1; 

        }
    }

     for(int i = 0; i < a.length(); ++i )
    {
        if(a[i] == 'a'|| a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'w' || a[i] == 'y')
        {
            counter4 += 1; 

        }
    }

    std::cout << std::endl;
    std::cout << "Word\t Syllables" << std::endl;
    std::cout << "__________________" << std::endl;

    std::cout << x << "\t"<< "\t"<< " "<< counter << std::endl; 
    std::cout << y << "\t"<< "\t"<< " " << counter2 - 1 << std::endl; 
    std::cout << z << "\t" << "\t"<< " " << counter3 - 1 << std::endl; 
    std::cout << a << "\t" << "\t"<<  " " << counter4 << std::endl;  

    
}
