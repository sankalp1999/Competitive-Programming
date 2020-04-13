/*
Good question combinining strings and sorting
*/




/*

Given two numbers X and Y, how should myCompare() decide which number to put 
first – we compare two numbers XY (Y appended at the end of X) and 
YX (X appended at the end of Y).

If XY is larger, then, in the output, X should come before Y, 
else Y should come before X.
*/


bool compare(int i, int j)
{
     string x, y;
     x = to_string(i);
     y = to_string(j);
     string r1, r2;
     r1 = x + y;
     r2 = y + x;
     if(r1 >= r2)return true;
     else return false;
}

string Solution::largestNumber(const vector<int> &a) {
    
    int sum = 0;
    // If all zeros for that case reqd
    // Even if one non-zero number is there, we will get a larger number
    // with that. Because it will come on the front
    for(int i =0 ;i < a.size(); i++)
    {
        sum += a[i];
    }
    if(sum == 0)return to_string(0);
    vector<int> b(a);
    
    sort(b.begin(), b.end(), compare);   
    string res = "";
    for(int i : b)
    {
        res += to_string(i);
    }
    
    return res;
    
    
    
}
