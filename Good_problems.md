## After August
1. PPXOR - Column sum of XOR 
2. XOR sum of all pairs - Idea used here is x * y ways of 1's that can occur then 2 ^ n 
  contribution to the final result.
4. XOR NINJA - Calculate XOR sum of 2 ^ n subsets. 
Main idea here not understood still.

5. 1398C Good subarrays
  Question : Find no. of subarrays which satisfy r - l = A[r] - A[l]
  This gives A[r] - r = A[l] - l
  These kind of relations help to decide the key-value pairing in the map.
  - Keep a running sum and then use a map to find Arr[i] - i 

Another solution to this problem was subtracting 1 from each array element
since each element contributes towards the length. This reduces the problem
down to count no. of subarrays with zero sum.

Similar problem i solved abc166_E problem. Same maths relation using mapping kind of question.
   