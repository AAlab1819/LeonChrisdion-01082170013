## FIND THE RUNNING MEDIAN
[[problem]](https://www.hackerrank.com/challenges/ctci-find-the-running-median/problem)

In this problem we need to find the median of the inputed list. Before find the median we need to make the list sorted using heapsort.
Example:

inputed list {3,2,1}
1. First input is {3}, the output will be 3 because there is no other number in the list.
2. Second input is {2,3}, the output will be 2.5 because (3+2)/2= 2.5.
3. Third input is{1,2,3}, the output will be 2, because 2 is the media of the list 

Complexity : O(nlogn)
