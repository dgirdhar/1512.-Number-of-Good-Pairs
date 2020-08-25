# 1512.-Number-of-Good-Pairs
A leet code problem to find out number of good pairs

Note: Run this code in Leet Code.

Version 1: Initial solution. A brute force approach to solve this problem. I got following results.

Runtime: 4 ms, faster than 60.28% of C++ online submissions for Number of Good Pairs.
Memory Usage: 7.2 MB, less than 91.72% of C++ online submissions for Number of Good Pairs.

--------------------

Version 2:
Used unordered maps in this version. Complexity is reduced to O(n).
There is no much improvements in the result.

Runtime: 4 ms, faster than 60.28% of C++ online submissions for Number of Good Pairs.
Memory Usage: 7.6 MB, less than 9.73% of C++ online submissions for Number of Good Pairs.

It seems like C++ implementation of hash map is not very good.

Version 3: 
This time I have used normal map and complexity is not O(nlgn).

Results are same.
Runtime: 4 ms, faster than 60.28% of C++ online submissions for Number of Good Pairs.
Memory Usage: 7.5 MB, less than 39.55% of C++ online submissions for Number of Good Pairs.

Version 4: 
In this version, I'm taking advantage of constraint given i.e. value is less than 100 and got following results.
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Good Pairs.
Memory Usage: 7.3 MB, less than 77.87% of C++ online submissions for Number of Good Pairs. 

-----------------------------

- Dhiraj Girdhar
