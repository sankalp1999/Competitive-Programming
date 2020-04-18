//Editorial solution and my solution are here. My solution was very straight and could have been easily improved with some 
//more example - taking and observations. 


/*
We need 3 positive integers of highest absolute value. 
Otherwise, we need 2 negative integers of highest absolute value and 1 positive integer. 
*/

int Solution::maxp3(vector<int> &A) {
    sort(A.begin(), A.end());
    int n = A.size();
    int all_pos = A[n-3]*A[n-2]*A[n-1]; //can be all negative
    // Notice that the last three numbers can be -ve numbers but they will be numbers of least absolute values
    // Also, the above line covers some edge cases as well
    // eg. 0, -1 ,2 ,3
    int pos_neg = A[0]*A[1]*A[n-1];     // if 2nd last el is negative
    // first two element negative and last one positive of highest absolute value
    return max({all_pos, pos_neg});
}

bool compare(int a, int b)
{
    return abs(a) > abs(b);
}

int Solution::maxp3(vector<int> &A) {
    sort(A.begin(), A.end(), compare);
    vector<int> v_pos;
    vector<int> v_neg;

    for(int i = 0;i < A.size(); i++)
    {
        if(v_neg.size()==2)break;
        if(A[i]<0)
        {
            v_neg.push_back(A[i]);
        }
    }
    
    for(int i = 0;i < A.size(); i++)
    {
        if(v_pos.size()==3)break;
        if(A[i]>0)
        {
            v_pos.push_back(A[i]);
        }
    }
    int ans = INT_MIN;
    
    if(v_pos.size()==3 )
    {
        ans = max(v_pos[0]*v_pos[1]*v_pos[2],ans);
    }
    if(v_pos.size()>=1 && v_neg.size() >= 2)
    {
        ans = max(v_pos[0]*v_neg[0]*v_neg[1], ans);
    }   
    
    int latest;
    int k = A.size()-1;
    latest = A[k]*A[k-1]*A[k-2];
    ans = max(ans, latest);
    return ans;
}





