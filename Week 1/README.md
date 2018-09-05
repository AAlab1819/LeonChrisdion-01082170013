
# Week01

**912A-25 Tricky Alchemy**

 [[**problem**]](http://codeforces.com/contest/912/problem/A)  [[**answer**]](http://codeforces.com/contest/912/submission/42297324)
 
In this problemset, its written that we need to find  the number of crystal that Grisha should acquire in addtion by counting the number crystal that grisha needed to make yellow ball, green ball, and blue ball. She will need 2 yellow crystals to create a yellow ball, 1 yellow crystal and 1 blue crystal to create a green ball, and 2 blue crystal to create a blue ball. In the code I declare the total to know that how many additional crystal that she needed. The bluec and the yellowc is needed to find that she need more blue or yellow crystal. For the if and else if statement it used to count the total of additional counter

1. **In the first statement if the total of bluecrystal and the yellow crystal is less than 0, that two crystal will be added to the          total.Its written that msut less than zero because if less than zero or minus it will be describe that she didin't have enough          crystal to  make the balls.**
2. **In the second statement it's used  if she has enough blue crystal, but she has not enought yellow crystal**
3. **In the third statement it's used if she doesn't have enough blue and yellow crytal.**
4. **in the fourth statement it's used id she doen't need additional crystal to make the balls.**

In the last statement it's writtentaht we need to multiply the tot6al with -1 because the sum of the total is only the sum of the additional crystal and all of them are has minus characteristic, and we need to ouput the result in positive integer.


**854A-62 Fraction**

[[**problem**]](http://codeforces.com/contest/854/problem/A)  [[**answer**]](http://codeforces.com/contest/854/submission/42496220)

In this problemset, it's written that we need to find a fraction, the sum of the fraction 
numerator and the denominator should be  equal to the input integer, and the fraction must be 
irreducible . The denominator must be smaller than the numerator but we need to find the largest denominator
that can be resulted.

To solve this problem we need to input the sum of the fraction that we want to find. Because the numeraator should be
greater than the denominator,we need to devide the input by two, adn set the devided input to be the limit of the loop.

In the loop we need to find the  numerator by subtrack the input with the denominator. After we find it we ned too check whether the 
gcd of the numerator and the denominator is equal to 1 or not. We need to check the gcd because we need to find the irreducable fraction.
If the numerator  is equal to 1, it will outuput the denominator and the nominator of the fraction, and the the loop would be break.


**988A-24 Divide Team**

[[**problem**]](http://codeforces.com/contest/988/problem/A)  [[**answer**]](codeforces.com/contest/988/submission/42498156)

In this problemset, we need to find that the student could be devided into team or not. The student can be divided if in the input the students don't have any distinct ratings.
In the code we need to use vector to save the number of array.
In the first for statement we use scores.input to check make a checker that will used in the next statement.
It is written that if scores.size()<k it will output "NO", in this line the code will check whter the size of the score is less then the amount of the member in the team or not. If it was less then k , it will ouput "NO". If the result is larger, it will push the data to the result vector and will be ouput.
