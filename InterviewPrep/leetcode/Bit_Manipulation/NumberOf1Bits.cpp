 int hammingWeight(uint32_t n) {
        // return __builtin_popcount(n);
        int count = 0;
        while(n)
        {
            n = n  & ( n - 1);
            count++;
        }
        return count;
        
    }