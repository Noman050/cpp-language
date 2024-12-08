#include<iostream>
using namespace std;
int main()
{
	int number,i=1,sum=0;
	cout<<"Enter A Number To Find Wheter it is perfect or not\n";
	cin>>number;
	while(i<number)
	{
		if(number%i==0)
		
			sum=sum+i;
			i++;
	}
		if(sum==number)
		cout<<i<<"Is A Perfect Number\n";
		else
		cout<<i<<"Is Not A Perfect Number\n";
	
	return 0;
}
