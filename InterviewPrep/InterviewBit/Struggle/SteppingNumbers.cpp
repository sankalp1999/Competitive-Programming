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
