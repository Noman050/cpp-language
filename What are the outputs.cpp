8. What would be output of the following piece of code.
A) int main()
{
int var = 100;
cout << var << endl;
myFunc();
cout << var << endl;
return 0;
void myFunc()
{
int var = 50;
cout << var << endl; }

Ans:
	If we ignore the errors the output will be
	100
	50
	100
	if we go with errors
	 #include<iostream> ,using namespace std; & Function prototype is not written before main.

B)
#include <iostream>
using namespace std;
void showVar(); // Function prototype
int main()
{
for (int count = 0; count < 10; count++)
showVar();
return 0; }
void showVar()
{
static int var = 10;
cout << var << endl;
var++; }

outout is:
	10
	11
	12
	13
	14
	15
	16
	17
	18
	19
