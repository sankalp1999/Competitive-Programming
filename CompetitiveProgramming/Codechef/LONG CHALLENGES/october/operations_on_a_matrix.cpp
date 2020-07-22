#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t; 
	
	while(t--)
	{
		int n, m, q;
		cin >> n >> m >> q;
		
		int row[n] = {0};
		int col[m] = {0};
		long long int count = 0 ;
		while(q--)
		{
			int r, c;
			cin >> r >> c;
			row[r-1] ^= 1;
			col[c-1] ^= 1;
		}
    // 1. row incrementing and col incrementing need not be together
		// 2  after that, we are only concerned about the no. of each row and column query.
    // 3. we can add each row and col element and check if odd
    // 4. but that gives timeout for the original constraints.
    // 5. Instead, make a bitset and only parity is important.
    // 6. Finally, no. of zeros and no. of ones is what is important.
    // 7. So, we multiply no. of zeros with no. of ones in the other set and no. of ones in other set with 
    //    no. of zeros in the first set.
    // I really liked this question. All my practice/ experience came into use for this one.
    long long int r0, r1, c0, c1;
		r0 = 0 ;
		r1 = 0 ;
		c0 = 0;
		c1 = 0;
			for(int i = 0 ; i < n; i++)
			{
				if(row[i]){r1++;}
				else{r0++;}
			}
			for(int i = 0 ; i < m; i++)
			{
				if(col[i]){c1++;}
				else{c0++;}
			}
			count = r0*c1 + r1*c0;
			cout << count << "\n";
	}
	return 0;
}
