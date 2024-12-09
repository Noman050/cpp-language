#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
    if(a[1]>a[2] && a[1]>a[3] && a[1]>a[4] && a[1]>a[5])
    { 
    cout<<a[1]<<"  Is Greater No.";
	}
	else if(a[2]>a[1] && a[2]>a[3] && a[2]>a[4] && a[2]>a[5])
    { 
    cout<<a[2]<<"  Is Greater No.";
	}
	else if(a[3]>a[1] && a[3]>a[2] && a[3]>a[4] && a[3]>a[5])
    { 
    cout<<a[3]<<"  Is Greater No.";
	}
	else if(a[4]>a[1] && a[4]>a[2] && a[4]>a[3] && a[4]>a[5])
    { 
    cout<<a[4]<<"  Is Greater No.";
	}
	else if(a[5]>a[1] && a[5]>a[2] && a[5]>a[3] && a[5]>a[4])
    { 
    cout<<a[5]<<"  Is Greater No.";
	}
    
	return 0;
	
}
