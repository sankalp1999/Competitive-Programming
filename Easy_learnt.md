
Concepts And mistakes 
1. 1366B Shuffle
In this question, it felt like covering intersection of sets like something keeps flowing between sets that intersect and one of 
them might have a particular type of value.
Mistake: I tried a complicated solution with visited array for testing intersections.
But rather, the problem was just about ranges. Elegant solution.

2. Mahmoud And Triangle 766B - Elegant concept 
   Problem was to make a triangle by selecting three line segments.
   Solution idea was simple and elegant.
   a <= b  <= c
   - Sort the array. b + c > a and c + a > b already holds
   -  Now, only a + b  < c has to be optimised. So, we want a to be as near as b and c also as near to be b 
   or in other words, we want a to be max possible but less than b and c to be min possible but near to b
Just iterate through the array and check if three consecutive elements.

3. Array Stabilization - Bad mistake
   Had to minimize A[i]max - A[i]min by removing one element.
   It was really simple to see that I had to remove either the max element or the min element.
   But I didn't see why to remove the min element. I was removing the max element only earlier.
   e.g 1 6 6 
   
   1 6 6 
   6 6 1  : (6 - 1 ) + 6 -6 = 5
   If i remove 6, then still 6 is there. No decrease in difference.
   But if i remove 1, 6 6 
                      6 6 gives 0.
                      
   
