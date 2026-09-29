Program Title: Employee Salary Calculator
Category: Interactive Program

Textbook Reference: Deitel &Deitel, C How to Program,9th Edition, Chapter 3, Exercise 3.20

Problem Description
Write a C program that calculates the gross pay for several employees based on the number of hours they worked and their hourly rate. The company pays the normal hourly rate for the first 40 hours and time-and-a-half for every hour worked beyond 40 hours. The program repeatedly accepts employee information and stops when the user enters -1 for the hours worked.

Main Concepts Used
Variables
Floating-point data type
scanf()
printf()
while loop
if statement
break statement
Overtime calculation
Arithmetic operations
Sentinel value
How the Program Works

The program repeatedly asks the user to enter the number of hours worked. If the user enters -1, the program stops. Otherwise, it asks for the employee's hourly rate.

If the employee worked 40 hours or fewer, the gross pay is calculated using the normal hourly rate. If the employee worked more than 40 hours, the first 40 hours are paid at the normal rate while the remaining hours are paid at one-and-a-half times the hourly rate. The calculated gross pay is then displayed.

Example Run
Input

Enter hours worked (-1 to end): 45
Enter hourly rate: 10000

Output

Gross pay: 475000.00

Ending the Program

Enter hours worked (-1 to end): -1

Output

Program ended.