#include <iostream>
using namespace std;
 
double getLength();
double getWidth();
void displayData(double, double, double);
double getArea(double, double);
 
 
int main(int argc, char *argv[])
{
	double len;
	double wid;
	double area;
 
 
	len = getLength();
	wid = getWidth();
	area = getArea(len, wid);
	displayData(len, wid, area);
 
	
	return 0;	
}
 
double getLength()
{
	double rectLength;
 
 
	cout<<"Enter the length of the rectangle: ";
	cin>>rectLength;
 
	return rectLength;
 
}
 
double getWidth()
{
		double rectWidth;
 
		cout<<"Enter the width of the rectangle: ";
		cin>>rectWidth;
 
		return rectWidth;
}
 
void displayData(double length = 10, double width = 20, double area = 200)
{
	cout<<"Rectangle's Width: "<<width<<endl;
	cout<<"Rectangle's Length: "<<length<<endl;
	cout<<"Rectangle's Area: "<<area<<endl;
}
 
 
double getArea(double length = 10, double width = 20)
{
	return length * width;
}
