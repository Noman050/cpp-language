#include<iostream>
using namespace std;
int main()
{
	int n[3],high;
	for(int i=0; i<3; i++)
	{
	cout<<"Enter "<<i+1<<" Number\n";
	cin>>n[i];
    }
	high=n[0];
	for(int i=0; i<3; i++)
	{
	
		if(n[i]>high)
		high=n[i];
	}
	cout<<"Highest Number Is : "<<high;
	return 0;
}
