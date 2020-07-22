// Example program
#include <iostream>
#include <string>
using namespace std;
int count = 0;

// opposite of multiply by 2 is divide by 2 if even

// in this question, we realise that it is much
// easier to divide by 2 and add 1 instead of what is given in the question
// There is, however, an even faster solution. The problem can be reversed as follows:
// we should get the number n starting from m using the operations "add 1 to the number" and "divide the number by 2 if it is even".
//
// Suppose that at some point we perform two operations of type 1 and then 
// one operation of type 2; but in this case one operation of type 2 and 
// one operation of type 1 would lead to the same result, and the sequence 
// would contain less operations then before. That reasoning implies that 
// in an optimal answer more than one consecutive operation of type 1 is 
// possible only if no operations of type 2 follow, that is, the only 
// situation where it makes sense is when n is smaller than m and we 
// just need to make it large enough. Under this constraint, there is the 
// only correct sequence of moves: if n is smaller than m, we just add 1 until 
// they become equal; else we divide n by 2 if it is even, or add 1 and then 
// divide by 2 if it is odd. The length of this sequence can be found in .
int main()
{
    int n, m;
    cin >> n >> m;
    int n2 = n;
    int count = 0;
	while(m > n)
	{
		if(m%2 == 0)
		{
			m = m/2;
			count++;
		}
		else
		{
			m += 1;
			count++;
		}
		if(m < n)break;
		
	}
	cout << count  + abs(m-n) << endl;

    
    
   
    
}