#include <iostream>
#include <map>
using namespace std ; 

int main()
{
    multimap <int,string> buddy ; 
    buddy.insert(make_pair(10,"Deepak")) ; 
    buddy.insert(make_pair(10,"Sankalp")); 
    buddy.insert(make_pair(30,"Mike"))   ; 
    buddy.insert(make_pair(40,"John"))   ;
   // multimap <int,string> :: iterator it ; 
    auto  it = buddy.begin();
    for(it;it!= buddy.end();it++)
    {
       cout << it-> first << " " << it-> second << endl ; 
    }
    cout << endl ; 
    cout<< "Empty : " << buddy.empty() << endl ; 
    cout <<"Size  : "<<buddy.size() ; 
    return(0) ;





}