
## 2 pointers

### How to identify if 2 pointer?

One is able to understand after solving many problems. So, experience will help. 

- If array is sorted.
- If something is being done in $O(N^2), O(N^3)$, we can bring it down by one factor.
- To find something summing up to something.
- Where there looks like a need to search something but using binary search does 
not give proper time complexity.

### Main things to figure out

1. From where to start the pointers
2. How will the pointers move? Will both the pointers move?
3. How to reduce to 2 pointer
4. How to reduce to one condition so as to apply two pointer.

### Tricks

Move only the minimum value pointer for e.g in 3 pointer question on InterviewBit i.e reduce the absolute sum of a,b,c from three different sized sorted arrays.

Rain water trapping, move the minimum pointer in anticipation that value will get maximum

Count triangle problem —> Sort the array and check a + b > c by using k.
Avoid repeated computation.
