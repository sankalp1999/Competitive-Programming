#include <iostream>
#include <stdio.h>
int main()
{   float km , mile ;

    std::cout << "Hello World\n";
    std::cout << "Please enter the number of mile\n" ;
    std::cin >> mile ; 
    km = 1.6094 * mile ; 
    std:: cout << km << "\n" ; 
    
    return(0);
}