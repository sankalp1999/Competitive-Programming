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
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
       int n;
       cin >> n;
       vector<lli> v(n);
       unordered_map<int, vector<int>> indices;
       unordered_map<int, int> counter;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           counter[v[i]]++;
           indices[v[i]].push_back(i + 1);
       }
       sort(v.begin(), v.end());
    //    int left = 0;
       int right = n - 1;
       lli init_sum = 0;
       int flag = 0;
       while (right >= 3)
       {
           init_sum = v[0] + v[right];
           int r = right - 1;
           int l = r - 1;
           int flip = 0;
           while (r > l && l > 0)
           {
               if(v[l] + v[r] == init_sum)
               {
                   flag = 1;
                   cout << "YES" << endl;

                   int num1 = v[0];
                   int num2 = v[l];
                   int num3 = v[r];
                   int num4 = v[right];

                //    cout << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
                   cout << indices[num1][counter[num1]-- - 1] << " ";
                   cout << indices[num4][counter[num4]-- - 1] << " ";
                   cout << indices[num2][counter[num2]-- - 1] << " ";
                   cout << indices[num3][counter[num3]-- - 1] << " ";
                   return 0;
                //    break;
                   // pass
               }
               else if(v[l] + v[r] < init_sum)
               {
                   break;
               }
               else if(v[l] + v[r] > init_sum)
               {
                   if(flip == 0)
                   {    
                       l--;
                       flip = 1;
                   }
                   else if(flip == 1)
                   {
                       r--;
                       flip = 0;
                   }
               }
           }
           if(flag == 1)
               break;
           right--;
       }


/* ----------------------------------------------------  */
       // Keep left fixed this time
    int left = 0;
    right = n - 1;
    init_sum = 0;
    flag = 0;
    while (left <= n - 3)
    // {
    //     init_sum = v[left] + v[n - 1];
    //     int l = left + 1;
    //     int r = l + 1;
        
    //     int flip = 0;

    //     // cout << "PRINT" << endl;
        
    //     while (l < r && r < right)
    //     {
            
    //     // int num1 = v[left];
    //     // int num2 = v[l];
    //     // int num3 = v[r];
    //     // int num4 = v[n - 1];
    //     // cout << num1 << " " << num4 << " " << num2 << " " << num3 << endl;

    //         if(v[l] + v[r] == init_sum)
    //         {
    //             flag = 1;
    //             cout << "YES" << endl;
    //             int num1 = v[left];
    //             int num2 = v[l];
    //             int num3 = v[r];
    //             int num4 = v[n - 1];
    //             // cout << num1 << " " << num4 << " " << num2 << " " << num3 << endl;
    //             cout << indices[num1][counter[num1]-- - 1] << " ";
    //             cout << indices[num4][counter[num4]-- - 1] << " ";
    //             cout << indices[num2][counter[num2]-- - 1] << " ";
    //             cout << indices[num3][counter[num3]-- - 1] << " ";
    //             return 0;
    //         }
    //         else if(v[l] + v[r] < init_sum)
    //         {
    //             if(flip == 0)
    //             {
    //                 r++;
    //                 flip = 1;
    //             }
    //             else if(flip == 1)
    //             {
    //                 l++;
    //                 flip = 0;
    //             }
    //         }
    //         else if(v[l] + v[r] > init_sum)
    //         {
    //             break;
    //         }
    //     }


    //     left++;
    //     if (flag == 1)
    //         break;
    // }
    if(flag == 0)
    {
        cout << "NO" << endl;
    }
}

// 10
// 1000 1000000 4 2 10000 1030 11312 4 2 2000  

// 5
// 99 101 102 107 109