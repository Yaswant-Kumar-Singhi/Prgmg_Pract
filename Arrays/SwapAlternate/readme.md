# Question  : Swap Alternate
```
You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
You don't need to print or return anything, just change in the input array itself.
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the elements of the resulting array in a single row separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1sec
Sample Input 1:
1
6
9 3 6 12 4 32
Sample Output 1 :
3 9 12 6 32 4
Sample Input 2:
2
9
9 3 6 12 4 32 5 11 19
4
1 2 3 4
Sample Output 2 :
3 9 12 6 32 4 11 5 19 
2 1 4 3 
```
### Aproach
```
As the desired result is to swap two consecutive numbers in array. We need to have a look at the examples
if there are 6 elements then we can swap altenate positions without any failure but if the value of N is odd
then at that time we need to eliminate the last index and swap rest others. So this is the logic to solve this 
question.

Psuedocode:
1. Find the length of the array
2. if length =  even, then
  i) run the loop from 0th index to last index and swap the elements 
  ii) increment the range by 2
3. if length = odd
  i) take the length of the array as length-1
  ii) Now repeat the steps 2(i) and 2(ii)
4. Finally return it
