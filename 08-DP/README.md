# WEEK8-DP
-
# 433B: Kuriyama Mirai's Stones
[[problem]](http://codeforces.com/problemset/problem/433/B)[[answer]](http://codeforces.com/contest/433/submission/45143981)

Here we are given a list of stones, each with their own price. The questions possible is type one and two: type one will be sum of stone's cost from l to r and type two will be sum of stone's cost from l to r in an non-decreasing order.


If the cost of stones are:
6 4 7 5 3 2
Then we will use the exact array for type one.
While for type two, we will use:
2 3 4 5 6 7

The input will be number of stones followed by cost of each stones. 
Then it is followed with how many questions will their be. Each question consists of type, l, and r. 
The output we should give is the sum of numbers from l to r according its type. 
The solution given is to use cumulative array because if we count the sum in each question over and over the time limit will exceed. So, as what have been stated before, we store the cost in two cumulative array: for the normal one and sorted array. Then to get the sum from l to r, it will be array[r-1] - array[l-2]. Except if l=1, Then we just need to take array[r] cause it is the sum from 1 to r. 
Complexity Worst Case: O(nlogn)

-

# 913C: Party Lemonade
[[problem]](http://codeforces.com/problemset/problem/913/C) [[answer]](http://codeforces.com/problemset/problem/913/C)

The problem here is to find the cheapest cost to fullfill the lemonade liters needed. Where each bottle have different volume and cost, the volume of the i-th bottle will be 2i-1 liters. You can buy more than a bottle with the same volume. You can have more lemonade in liters than the required number. 
The first line input will be number of bottle types and required lemonade in liters. 
The second line input will be the price of the i-th bottle. 
The output will be the money we spend to reach the required lemonade. 
The solution here is first to store the cost for each type of bottle. Then, we will check if we can buy 2 bottle of smaller type of bottle with cheaper price rather than 1 bottle with higher price. If the bigger bottle cost higher, then we will store that type of bottle with the price of 2 smaller bottle. So in such case below, it is more beneficial to buy 2 bottle of 4L type rather than a bottle of 8L.

LITERS: 4
COST  : 5
LITERS: 8
COST  : 17

Then we loop all the bottles from the highest liters down to the smallest liters. Then we will see is it cheaper to buy 2 of the biggest bottle if it is still left to fullfill or 1 bottle and other bottle to fullfill the need of the lemonade. 
Complexity Worst Case: O(n)

