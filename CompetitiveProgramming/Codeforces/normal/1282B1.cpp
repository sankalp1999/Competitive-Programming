#include <iostream>
#include <strings.h>
#include <algorithm>
#define lli long long int
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t, n, p, k, x;
  cin>>t;
  while(t>0){
    t--;
    cin>>n>>p>>k;
    int sumOdd=0, sumEven=0, x, maxProd = 0;
    int a[n];
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    sort(a, a+n);
    for(int i=1; i<=n; i++){
      x = a[i-1];
      if(i%2==0){
        sumEven += x;
        if(sumEven <= p){
          maxProd = max(maxProd, i);
        }
      }
      else{
        sumOdd += x;
        if(sumOdd<=p){
          maxProd = max(maxProd, i);
        }
      }
      
    }
    cout<<maxProd<<endl;
  }
 
  return 0;
}