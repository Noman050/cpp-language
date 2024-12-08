#include<iostream>
#include<conio.h>
using namespace std;
void poc(int);       //poc stands for prime or composite
int main()
{
	int n;
	cout<<"Enter number : ";
	cin>>n;
	poc(n);
	getch();
}
void poc(int n)
{
	int i,f=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			cout<<n<<" is Composite number";
			f=1;
			break;
		}
	}
    if(f==0)
	cout<<n<<" is Prime nummber";
}

