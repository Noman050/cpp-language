#include<iostream>
using namespace std;
int main()
{
	int i,l,sum=0;
	cout<<"Enter Limit :";
	cin>>l;
	for(i=1; i<=l; i++)
	{
		if(i%2!=0)
		sum=sum+i;
	}
	cout<<"Sum Of All Odd Numbers Under The Given Limit= "<<sum;
}
