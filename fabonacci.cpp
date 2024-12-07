#include<iostream>
using namespace std;
int main()
{
	int x,y,z=0,a=1,e;
	cout<<"Enter The Limit Of Fabonacci Series\n";
	cin>>y;
	for(x=1; x<=y; x++)
	{
		cout<<z<<" ";
		e=z+a;
		z=a;
		a=e;
	}
}
