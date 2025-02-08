# DSA-Assignments
This repository contains Data Structures and Algorithms (DSA) assignments.
<br>
Question - 04
<br>
Write a C++ program that performs various operations on an array, including reversal, checking if the array is sorted, and finding the maximum and minimum elements. The program should:
<br>
Initialize an array of a fixed size (e.g., 10) and allow the user to populate it with integer values.
<br>
Implement the following functionalities:
<br>
Reverse the array and display the reversed array.
<br>
Check if the array is sorted in ascending order and display an appropriate message.
<br>
Find and display the maximum and minimum elements in the array.
<br>
Allow the user to display the original array at any point.
<br>
Question - 05
<br>
Write a recursive function to calculate the sum of the digits of a given positive integer.
<br>
Input:
<br>
Enter a positive integer: 12345
<br>
Output:
<br>
The sum of the digits of 12345 is 15.
<br>
Question - 06
<br>
Write a recursive function to determine if a given natural number
<br>
N is a palindrome. A number is a palindrome if it reads the same backward as forward.
<br>
Input: 121
<br>
Output: true
<br>
Question - 07
<br>
You are given a rod of length N and an array prices[] where prices[i] represents the price of a rod of length i+1. Your task is to determine the maximum profit you can achieve by cutting the rod into smaller lengths and selling the pieces.
<br>
Write a recursive function maxProfit(int n, int[] prices) to calculate the maximum profit.
<br>
Input: N = 8
<br>
prices = [1, 5, 8, 9, 10, 17, 17, 20]
<br>
Output: 22
<br>
Question - 08
<br>
The Tower of Hanoi is a classic problem that involves moving disks from one rod to another under certain constraints. There are three rods: source rod (A), destination rod (C), and auxiliary rod (B). The objective is to move N disks from rod A to rod C, following these rules:
<br>
Only one disk can be moved at a time.
<br>
A disk can only be placed on top of a larger disk or on an empty rod.
<br>
Use the auxiliary rod (B) as needed.
<br>
Write a recursive function towerOfHanoi(int n, char source, char destination, char auxiliary) to print the sequence of moves required to solve the problem.
<br>
Input: N = 2
<br>
Output: Move disk 1 from A to B
<br>
Move disk 2 from A to C
<br>
Move disk 1 from B to C
<br>
Question - 09
<br>
Problem Statement:
<br>
A Direct Address Table is a simple way to map a key to its value using an array. The index of the array represents the key, and the value at that index represents the data associated with the key.
<br>
Write a program to implement a Direct Address Table for integer keys ranging from 0 to n-1. You need to support the following operations:
<br>
Insert (key, value): Insert a value at the given key.
Search (key): Retrieve the value associated with the given key.
Delete (key): Remove the value associated with the given key.
Input:
<br>
The first line contains an integer n (the size of the table).
<br>
The second line contains an integer q (the number of queries).
<br>
Each of the next q lines contains a query in one of the following formats:
<br>
- INSERT key value: Insert value at the position key.
- SEARCH key: Retrieve the value at the position key. If the key does not exist, return ""NOT FOUND"".
- DELETE key: Remove the value at the position key.

Output:
<br>
For each SEARCH query, output the value associated with the key or ""NOT FOUND"" if the key does not exist.
<br>

Example:
<br>
Input:
<br>
5
<br>
6
<br>
INSERT 2 100
<br>
INSERT 3 200
<br>
SEARCH 2
<br>
DELETE 2
<br>
SEARCH 2
<br>
SEARCH 3
<br>

Output:
<br>
100
<br>
NOT FOUND
<br>
200
<br>

Explanation:
<br>

After INSERT 2 100, the table looks like: [None, None, 100, None, None].
<br>
After INSERT 3 200, the table looks like: [None, None, 100, 200, None].
<br>
SEARCH 2 retrieves the value 100.
<br>
DELETE 2 removes the value at key 2. The table becomes [None, None, None, 200, None].
<br>
SEARCH 2 now returns ""NOT FOUND"".
<br>
SEARCH 3 retrieves the value 200.
<br>
This problem tests the understanding of direct address tables and basic hashing concepts.
<br>
Question - 11
Problem:

Given a 2D matrix, rotate it 90 degrees clockwise.

Example:
<br>
Input:
<br>
1 2 3
<br>
4 5 6
<br>
7 8 9

Output:
<br>
7 4 1
<br>
8 5 2
<br>
9 6 3


