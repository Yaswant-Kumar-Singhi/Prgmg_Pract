# Question
```
Return Array Sum

Given an array/list(ARR) of length N, you need to find and return the sum of all the elements in the array/list.

Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
The first line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the sum of the numbers in the array/list.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5

Time Limit: 1sec
Sample Input 1:
1
3
9 8 9
Sample Output 1:
26
Sample Input 2:
2
5
1 2 3 4 5 
3
10 20 30 
Sample Output 2:
15
60
```
### Approach 
```
Approach-1 : By adding individual array elements. For example:
arr[] = {1,2,3,4,5}
Then,
First we will be adding element at 0th index, then on 1st index and so on. 
Output: 15

pseudocode:
1. initialize a variable with sum=0
2. Loop over the array.
3. Check loop is with the array length.
4. Add sum with arr[i].
5. increment the loop.
6. Repeat step 2 to 5 if range is not covered
6. if all elements within the range are covered then return the result.

Time Complexity : O(N)
```
```
Approach-2 : Using C++ library accumulate by which we can quickly find the sum of array elements.

For more info on accumulate go to https://medium.com/@singhiyaswant/what-is-accumulate-44133cc22ec6  
```
 


