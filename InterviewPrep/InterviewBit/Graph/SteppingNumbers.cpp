
/*
I had coded the dfs brute force solution first but it gave TLE.
I read this solution from others and gfg.
This is based a bit on paperwork.
To get to next from suppose 1
11 or 12 which means 10 + 1 + 1
                     10 + 1 - 1 
num * 10 + lastDigit + 1
num * 10 + lastDigit - 1 will give the next stepping number

Edge case : When last digit is 0 and last digit is 9
0 : You can only append 1
9 : You can add 8
89 -> 890 + 9 - 1 = 898 add only the second number
10 -> 100 + 0 + 1 = 101

We generate for all i from 0 to 9
and then ensure that we are in the range.

Finally, sort and return.

*/


void bfs(int m, int n, int num, set<int>& v)
{
    queue<int> q;
    q.push(num);
    
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        if(top >= m  && top <= n)
        {
            v.insert(top);
        }
        else if(num == 0 || top > m)continue;
        int lastDigit = top%10;
        int step_a = top * 10 + lastDigit + 1;
        int step_b = top * 10 + lastDigit - 1;
        // cout << "HEre" << endl;
        if(lastDigit == 9)
        {
            q.push(step_b);
        }
        else if(lastDigit == 0)
        {
            q.push(step_a);
        }
        else
        {
            q.push(step_a);
            q.push(step_b);
        }
    }
}


vector<int> Solution::stepnum(int A, int B) {
    vector<int> v;
    set<int> s;
    for(int i = 0; i <= 9; i++)
    {
        bfs(A, B, i, s);
    }
    for(auto it = s.begin(); it != s.end(); it++)
    {
        v.push_back(*it);
    }
    return v;
}
