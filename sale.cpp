#include<iostream>
using namespace std;
int main()
{
	float sales[5];
	
	for(int i=0; i<=4; i++)
	{
		cout<<"Enter the sales of emploee  "<<i+1<<"\n";
		cin>>sales[i];
	}
	for( int k=0; k<=4; k++)
	{
		cout<<" sales Of "<<k+1<<" Emploee is "<<sales[k]<<"\n";
	}
	for(int j=0; j<=4; j++)
	{
		cout<<" new salary Of "<<j+1<<" Emploee is "<<sales[j]*1.5<<"\n";
	}
     
}
