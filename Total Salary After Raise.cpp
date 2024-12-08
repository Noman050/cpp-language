#include<iostream>
using namespace std;
void salary(float x)
{
	float totalsalary;
	totalsalary=x*1.5;
	cout<<"Total Salary After Raise Is: "<<totalsalary<<endl;
	
}
int main()
{
	float sales[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter Sales Of Emploees\n";
		cin>>sales[i];
		salary(sales[i]);
	
	}

}
