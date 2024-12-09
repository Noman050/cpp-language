#include<iostream>
using namespace std;
int main()
{
	int rl[45];
	float cgpa[45];
	char name[40];
	for(int i=0; i<=39; i++)
	{
		cout<<"Enter The Name Of "<<i+1<<" Student "<<endl;
		cin>>name;
		cout<<"Enter The CGPA Of " <<\n";
		cin>>cgpa[i];
		cout<<"Enter Your Roll No\n";
		cin>>rl[i];
	    cout<<"Your Name Is = "<<name;
		cout<<"Your CGPA Is = "<<cgpa[i];
		cout<<"Your Roll No Is = "<<rl[i];
	}
	
	return 0;
}
