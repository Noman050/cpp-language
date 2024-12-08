#include<iostream>
using namespace std;
int main()
{
	int x,y,n,p;
	cout<<"Enter Any Number To Find Prime Factors\n";
	cin>>n;
	for(x=2; x<=n; x++)
	{
		if(n%x==0)
		{
			p=1;
			for(y=2; y<=x/2; y++)
			{
				if(x%y==0)
				{
					p=0;
					break;
				}
			}
			if(p==1)
			{
			cout<<x<<"\t";
			}
			}
	}
	
	return 0;
	}
