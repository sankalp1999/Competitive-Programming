/*
Take advantage of fact that you can move in all directions. So, we choose diagonal move greedily.
Calculate the difference of x and y between two points as you proceed in the arrays.
Then, it is optimal to move diagonals till you can move.
for eg. (0,0) to (5,2)
  one can go from (0,0) --> (1,1) --> (2,2) 
    Now, y co-ordinate is 0.
    So, we go just 3 steps right.
    
    Or steps += min(xd, yd)
    then step += (xd if xd > 0) or (yd if yd > 0)
*/
/*
https://en.wikipedia.org/wiki/Chebyshev_distance
Some more enquiry shows that 
steps += max(x2 -x1, y2-y1) is the answer.
*/


int Solution::coverPoints(vector<int> &a, vector<int> &b) {
    
    vector<pair<int,int>> v;
    int step = 0 ;
    for(int i = 0; i < a.size() - 1; i++)
    {
        int x = a[i];
        int y = b[i];
        int x2 = a[i+1];
        int y2 = b[i+1];

       int xd = abs(x2 - x);
       int yd = abs(y2 - y);
       int t1, t2; t1 = xd; t2= yd; 
       xd -= min(t1, t2);
       yd -= min(t1,t2);
       step += min(t1, t2);
       step += xd == 0 ? yd : xd ;
    }
    return step;    
    
    
    
}
