#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--){
ll n,sum=0,x;
cin>>n;
for (ll x = n; x > 0; x = x / 10) 
sum = sum + x % 10;
 if(sum>=10){
x=ceil(sum/10.0); 
 x=x*10; cout<<x<<endl;
  x=x-sum; 
  cout<<x<<endl; }
   else {x=10-sum;cout<<n<<x;
    cout<<"\n"; 
    
    }
  
}  return 0;
};