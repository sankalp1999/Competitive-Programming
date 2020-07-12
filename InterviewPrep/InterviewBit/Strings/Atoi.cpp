/*
Main idea
start from the right.

sum = 0
sum = sum * 10 + A[i] - '0'

Other details:
Handle whitespace, alphabets using ascii characters.
Handle '+' and '-' separately,

The int can overflow. So for that, have a case where you compare with 
the INT_MAX and INT_MIN.

*/


int Solution::atoi(const string A) {
    
    long long int sum = 0;
    int i = 0;
    int flag = 0;
    while( i < A.size())
    {
        if(A[i] == '+')
        {
            i++;
            continue;
        }
        if(A[i] == '-')
        {
            // cout << "HERe" << endl;
            flag = 1;
            i++;
            continue;
        }
        if(A[i] < '0' || A[i] > '9')break;
        if(A[i] == ' ')break;
    
        sum = sum * (long long)10 + (long long)(A[i] - '0');
        i++;
    }
    
    if(sum <= INT_MIN || sum >= INT_MAX)
    {
        int res =  flag == 1 ? INT_MIN : INT_MAX;
        return res;
    }
    if(flag == 1)sum = -1 * sum;
    return sum;
}
