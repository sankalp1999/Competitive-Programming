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
6. 1420D Rescue_Nobel is a good problem.
  Greedy(no. of ways to have k intersections between ranges.) 
  Standard max interval + combinatorics with slight trick.
7. 1420C Peaks and valley concept or take a subsequence such that you maximize 
   absolute difference of adjacent array elements or just the alternating difference.
   We want to find Choose a subsequence from b1, b2 ,b3 b4 .... such that ba1 - ba2 + ba3 - ba4 is maximized 
   1420C had a DP approach too.
   d1 array and d2 array. 
   d1 is the prefix of the first i elements with odd length subsequence
   d2 is prefix of first i elements with even length subsequence.
   d1[i + 1] = max(d1[i], d2[i] + a[i])
   d2[i + 1] = max(d2[i], d1[i]) - a[i])
   