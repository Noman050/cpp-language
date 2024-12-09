#include<iostream>
using namespace std;
int main()
{
	int n[3],low;
	for(int i=0; i<3; i++)
	{
	cout<<"Enter "<<i+1<<" Number\n";
	cin>>n[i];
    }
	low=n[0];
	for(int i=0; i<3; i++)
	{
	
		if(n[i]<low)
		low=n[i];
	}
	cout<<"Lowest Number Is : "<<low;
	return 0;
}
