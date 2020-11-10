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
   
### October 2020
1. https://codeforces.com/contest/1348/problem/B
This problem is really good constructive problem. Here, we literally didn't have to insert elements. 
For each subarray have to same sum, it should contain exactly k unique numbers. If the number of unique elements is more than k,
then it was not possible at all. 
But if it's it less than k, we make a list of those unique numbers and append 1 till it becomes same.
We repeat those n times. That way, we are in the constraint of 1e4 also.

2. https://codeforces.com/contest/1436/problem/C Binary  Search
  **A really good problem where the knowledge of binary search and maths tested.
  ** [Solution Link](https://github.com/sankalp1999/Competitive-Programming/blob/master/CP/Codeforces/Oct2020/1436C_Binary_Search.cpp)
 
### November 2020
In general, problems above 1300 (1500+ ) are good and difficult especially the constructive ones.
1. 1416-A K-amazing number. -->Find the max gaps. This helps to identify the candidate. 
Also, whatever is good for K, it can be answer for > K also until unless a smaller candidate is found.

2. Chef is throwing just random words (SOS) - OR of sum of all subsets. Here, we use the fact that if a bit is set in any of the elements,
it will be definitely set in the final answer. But, if u choose two elements with  i - 1 th bit set, then u can make i th bit set
by adding these two numbers.  By this observation, bits[i] += bits[i-1]/2.  Then, make the final ans by mask.
OR in this problem, only the right i-1 bits affect the ith bit so we can keep taking prefix sum, OR it with our res variable
All the bits which could be set in the final answer by adding will get set.
```
let ele be the input
res = res | ele
prefix_sum += ele;
res = res | prefix_sum
cout << res << endl;
```

3. Manasa and Stones https://www.hackerrank.com/challenges/manasa-and-stones/editorial
It's an easy problem. I initially did just a BFS. But notice, that we just want the last iteration.
All the numbers will be between (n - 1 ) * a and (N - 1 ) * b. (a < b)
(N -2 ) * a + b > (N - 1) * A because b > a
Just run a loop

