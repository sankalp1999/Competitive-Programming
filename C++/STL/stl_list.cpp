#include <cstdio>
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> numbers ;
 //   cout << *it << endl  ;  
    numbers.push_back(10); //inserting elements
    numbers.push_back(20); //inserting elements
    numbers.push_back(30); //inserting elements
    numbers.push_back(40); //inserting elements
    // iterators are like pointers in st
    list <int>:: iterator it;
    numbers.push_front(500) ; 
    cout << numbers[1] << endl ;
   // it = numbers.begin();
    cout << *it << endl ;
    it++ ; // iterator is incremented.
   
    /* reverse iterator */
   
    cout << *it2 << endl ; 
    auto it = numbers.begin(); 

    

return(0);
}   