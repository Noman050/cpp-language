#include<iostream>
using namespace std;
int main()
{
	int n;
	unsigned long long fac=1;
	cout<<"Enter The Positive Integers\n";
	cin>>n;
	for(int i=1; i<=n; ++i)
	{
		fac=fac*i;
	}
	cout<<"Factorial of "<<n<<"="<<fac;
	return 0;
}
