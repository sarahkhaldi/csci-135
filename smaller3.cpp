/*
Author: Sarah Khaldi
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab1B

A program that asks the user to input three integer numbers and prints out the smaller of the three
*/

#include <iostream>
using namespace std;

int main()
{
 int num1, num2, num3;
 cout << "Enter the first number: ";
 cin >> num1;
 cout << "Enter the second number: ";
 cin >> num2;
 cout << "Enter the third number: ";
 cin >> num3;

 if ((num1 < num2) && (num1 < num3))
 {
  cout << "The smaller of the three is " << num1 << endl;
 }
 else if ((num2 < num1) && (num2 < num3))
 {
  cout << "The smaller of the three is " << num2 << endl;
 }
 else
 {
  cout << "The smaller of the three is " << num3 << endl;
 }

 return 0;
}