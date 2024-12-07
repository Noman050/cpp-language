#include<iostream>
using namespace std;
void comparearray(int a[],int b[],int 5)
{
	for(int i=0; i<5; i++)
	{ 
        int p=0;	
		if(a[i]!=b[i])
		{
			p=1;
		}
		if(p==3)
		cout<<"Unequal\n";
		else
		cout<<"Equal\n";
	}
}
int main()
{
	int a[5],b[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter First Number Of Array ";
		cin>>a[i];
		cout<<"Enter First Number Of 2nd Array ";
		cin>>b[i];
		
	}
	comparearray(a,b,5);
}
