# Notes

## Thanks for the resources
- CodeNCode Graph Theory
- Nick White
- CodeBix, TechDose
- LeetCode Discuss.

## Observations
- Number of islands is about counting components with dfs/bfs 
- Commutable Islands used Kahn's algo which is basically queue/priority queue(if lexicographical order required) and maintaining indegree count.
  Topological Sort can be used to detect cycles as well.
  
## Diameter
- Find farthest node from any node. Then, from that node, find the other farthest node. That is the longest path. Check and understand the proof.
- Word Ladder makes uses of set of strings. Since, one move is possible only when one character difference is there, we can pick a character
  of a word and change it to see if it is in the set. This helps in time complexity.
- Sometimes, instead of using visited array, just modifying the input is easier.
- Use dx and dy for grid problems.


## Cycle detection
- Directed Graph -> Use a recursive array
- [ ] Learn the coloring method 
- [ ] Learn for undirected graph
