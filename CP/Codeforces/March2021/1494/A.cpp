#include<bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
#define gcd __gcd
const double PI = 3.141592653589793238460;

using namespace std;
bool areBracketsBalanced(string expr) 
{   
    stack<char> s; 
    char x; 
  
    // Traversing the Expression 
    for (int i = 0; i < expr.length(); i++)  
    { 
        if (expr[i] == '(')  
        { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
            return false; 
  
        switch (expr[i]) { 
        case ')': 
              
            // Store the top element in a 
            x = s.top(); 
            s.pop(); 
            break; 
        } 
    } 
  
    // Check Empty Stack 
    return (s.empty()); 
} 


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while(t--)
   {
       string s;
       cin >> s;
       char a, b, c;
       a = 'A';
       b = 'B';
       c = 'C';
       char arr[] = {'(', ')'};
       int flag = 0;
       int res = 0;
       for (int i = 0; i < 2; i++)
       {
           
           for (int j = 0; j < 2; j++)
           {

               for (int k = 0; k < 2; k++)
               {    
                   string temp = "";
                    flag = 0;
                   for (int l = 0; l < s.size(); l++)
                   {
                       if(s[l] == 'A')
                       {
                           temp += arr[i];
                       }
                       else if (s[l] == 'B')
                       {
                           temp += arr[j];
                       }
                       else
                       {
                           temp += arr[k];
                       }
                   }
                   if(areBracketsBalanced(temp))
                   {
                       res = 1;
                       break;
                   }
               }
               if(res == 1)
                   break;
           }
           if(res == 1)
               break;
       }
       if(res == 1)
       {
           cout << "YES" << endl;
       }
       else
           cout << "NO" << endl;
   }
}