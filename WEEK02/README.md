# WEEK 2

# 291A-12  Spyke Talks
[[**problem**]](http://codeforces.com/contest/291/problem/A) [[**answer**]](http://codeforces.com/contest/291/submission/42788974)


In this problemset we need to help Polycarpus to analyze the input data and find out the number of pairs of secretaries that are taling.
In first line we need to input the number of secretaries, and in second line we need to input the number of secretaries. After that we need 
to output how many pairs of secretaries are talking. 

In the code I'm using gnome sort to finish the problem. the shellsort is needed to make the number of secretaries sorted and it will be make the
the checking easier. After that, in looping  we need to make if and else statement. In the first statement  it is shown that if the amount of 
index i equal to 0 we will just continue the looping without change the counter of the secretary pairs, but if the next index of the current amount
index is equal the counter will be added by one. And then it will check the next index of amount, if the index is equal to the index of previous 
mount it will add 1 point to the counter1(counter1 is the exception of the counter variable) and then it will break the loop. if the loop broken and 
the counter1 is more than zero the program will output -1, but if the counter1 is zero the program will output the counter of the secretaries

# 230A-52 Dragons

[**problem**]](http://codeforces.com/contest/230/problem/A) [[**answer**]](http://codeforces.com/contest/230/submission/42798702)

In this problemset we need to find that Kirito can defeat all the dragons that we input or not. In the first line we nee dto inpt the current Kirito's power and the number of dragon, adn int the next line we need to input the power of the dragon and the amount of the power that will be added to the Kirito's power if he succeed to defeat the dragons at that level. For the ouput we will output either the kirito can or can't defeat all dragons in the game.

In the code I'm using the shellsort to sort the powr of the dragon that he will deal from the dragon with the lowest power to the hightest power of the dragon. After the dragons power sorted, we need to make a looping statement with some if else statement in it. In the first statement it's used to check if the earliest kirito power is higher than the dragon power. In the second satement it's used to check if the Kirito's after added by the previous additional power is higher than the next level dragon power or not. If the power is higher, the current Kirito's power will be added by the additional power, but if the kirito's power is less than the dragon power the loop will be broken, because it means Kirito's lose and it will make the counter into 0 and ouput "NO", but if the loop always continue until the loop end, it will output "YES".


