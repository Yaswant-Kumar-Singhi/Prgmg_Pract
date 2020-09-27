# Question : Arrange Numbers In Array
```
You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,.......4,2.

Note:
You need not print the array. You only need to populate it.
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains an integer 'N'.
Output Format :
For each test case, print the elements of the arra/listy separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^4

Time Limit: 1sec
Sample Input 1 :
1
6
Sample Output 1 :
1 3 5 6 4 2
Sample Input 2 :
2
9
3
Sample Output 2 :
1 3 5 7 9 8 6 4 2
1 3 2

```

### Approach
```
Appr-1: If you seen the example carefully you might find that a pattern of odd numbers and then even numbers.
You might break the array into 2 halves and merge them at the end.
In this approach we are going to fill (N-1)/2 indexes with odd numbers and the rest with even numbers.
For example if we have N=5, then (N-1)/2 = 2 so, till 2nd index our array will look like [1,3,5] and 
rest will be filled [4,2] where the even numbers are arranged in decending order if traversed from left to right
or you might say that even numbers are arranged in accending order if traversed from right hand side.

PsuedoCode:
1. Find the index till where we are going to have odd numbers
2. add odd numbers to the array
3. From (N-1)/2+1 index start filling even numbers from decending order
4. Return the final array

```
```
Appr-2: In this approach we are going to fill array from both ends.

Psuedocode:
1. let the start index be 0
2. let end index be n-1
3. Take a counter variable
3. Run a loop from start to end
4. start filling the array from both end till the ith index is not equal to end
5. if ith index is equal to end then add the number to arr[end]
6. Return the array
```
