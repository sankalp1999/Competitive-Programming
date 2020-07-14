/*
Reference https://www.youtube.com/watch?v=EyfE0-lfO4A CPP nuts channel

Smart pointer is a class that wraps a raw pointer to manage it's life cycle.
It  removes the chances of memory leak.
It makes sure that the object is deleted if it is not referenced anymore.
*/

// Suppose you have a thousand pointers. Now, you don't want to waste your time recalling which pointers you deleted or not.
// When the scope of smart pointer is over, it will automatically deallocate the memory.

/*
Unique pointer
- This is basically a raw pointer wrapped by a class. It is a type of smartpointer and has all those 
  abilities.
- If an exception arises, it will deallocate the memory and hence no memory leak.
- We can use -> and * as they are overloaded
- We can also make array of unique pointers 

// Operations : Release, swap , reset, get, get_deleter

*/
#include <iostream>
#include <memory>

class Foo{
    int x;
    public:
    explicit Foo(int x): x{x} {}
    int getX() {return x; }
};

int main()
{
    unique_ptr<Foo> p1 (new Foo(1)); // Made on stack. No need to worry to delete the object.
    
    unique_ptr<Foo> p2 = make_unique<Foo>(20); // Helps to avoid having the same pointer pointing to the same thing.
    
    // p1 = p2 will fail because you cannot copy ownership
    unique_ptr<Foo> p3 = std::move(p1);
    
    Foo* p = p3.get() ; // It gives the pointer to p it is holding
    
    Foo* p4 = p3.release(); // release ownership of the object 
}
