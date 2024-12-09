#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float ewh,overtime,bonus=1.5,basepay,totalpay;
	for(int i=0; i<=14; i++)
	{
		cout<<"\nEnter The Working Hours"<<endl;
		cin>>ewh;
		if(ewh<=40)
		{
			basepay=ewh*22.55;
			cout<<"Basepay is = "<<basepay;
			cout<<"\nOvertime is = 0\n";
		}
		else if(ewh>40)
		{
			basepay=ewh*22.55;
			overtime=(ewh-40)*1.5*22.55;
			totalpay=basepay+overtime;
			cout<<"\nBasepay is = "<<basepay;
			cout<<"\nOvertime = "<<overtime;
			cout<<"\nTotal Salary is = "<<totalpay;
		}
	}
	getch();
	return 0;
}
