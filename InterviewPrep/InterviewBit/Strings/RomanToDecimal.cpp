


/*
The key is to notice that in a valid Roman numeral representation the letter with the most value always occurs at the start of the string.

Whenever a letter with lesser value precedes a letter of higher value, it means its value has to be added as negative of that letter’s value.

In all other cases, the values get added.

*/







int Solution::romanToInt(string A) {
    
    long long int sum = 0;
    unordered_map<char,int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    for(int i = 0; i < A.size() ; i++)
    {
        
        if(m[A[i]] >= m[A[i+1]])
        {
            sum += m[A[i]];
        }
        else if(m[A[i]] < m[A[i+1]]) // exception case
        {
            sum += m[A[i+1]] - m[A[i]];
            i++;
        }
    }
    return sum;
}
