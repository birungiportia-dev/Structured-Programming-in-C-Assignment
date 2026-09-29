Program Title: Count the Number of 9s in an Integer
Category: Loop with Decision

Textbook Reference : Deitel &Deitel, C How to Program,9th Edition,Chapter 3, Exercise 3.38

 Description
Write a C program that reads an integer containing 5 digits or fewer and determines how many of its digits are 9s. The program also checks whether the entered number is valid and displays an error message if the number contains more than 5 digits.

Main Concepts Used
Variables
Integer data type
scanf()
printf()
while loop
if statement
Modulus operator %
Integer division
Counter variable
Input validation

How the Program Works
The program first asks the user to enter an integer containing 5 digits or fewer. It checks whether the number is within the allowed range. If the number has more than 5 digits or is negative, the program displays an invalid input message.

For a valid number, the program uses a while loop to examine each digit individually. The modulus operator % 10 is used to obtain the last digit of the number. If the digit is 9, a counter is increased by one. Integer division by 10 then removes the last digit so that the next digit can be checked. The process continues until all digits have been examined.

Example Run
Valid Input
Enter an integer (5 digits or fewer): 9999

Output
The number of digits that are 9 is: 4

Invalid Input
Enter an integer (5 digits or fewer): 99994362783

Output
Invalid number. Please enter an integer with 5 digits or fewer.