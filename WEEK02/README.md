# WEEK 2

# 291A-12  Spyke Talks
[[**problem**]](http://codeforces.com/contest/291/problem/A) [[**answer**]](http://codeforces.com/contest/291/submission/42788974)


In this problemset we need to help Polycarpus to analyze the input data and find out the number of pairs of secretaries that are taling.
In first line we need to input the number of secretaries, and in second line we need to input the number of secretaries. After that we need 
to output how many pairs of secretaries are talking. 

In the code I'm using shellsort to finish the problem. the shellsort is needed to make the number of secretaries sorted and it will be make the
the checking easier. After that, in looping  we need to make if and else statement. In the first statement  it is shown that if the amount of 
index i equal to 0 we will just continue the looping without change the counter of the secretary pairs, but if the next index of the current amount
index is equal the counter will be added by one. And then it will check the next index of amount, if the index is equal to the index of previous 
mount it will add 1 point to the counter1(counter1 is the exception of the counter variable) and then it will break the loop. if the loop broken and 
the counter1 is more than zero the program will output -1, but if the counter1 is zero the program will output the counter of the secretaries
