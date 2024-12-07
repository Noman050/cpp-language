#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0,d=1,e;
	cout<<"Enter A Limit Of Fabonacci Series To Be Printed On the Screen\n";
	cin>>b;
	for(a=1;a<=b; a++)
	{
		cout<<c<<" ";
		e=c+d;
		c=d;
		d=e;
	}
	return 0;
}

