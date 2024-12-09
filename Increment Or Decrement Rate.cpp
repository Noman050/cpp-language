#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long long int x=1,y,z=1,ch,w=2;
	cout<<"Input Increment Or Decrement Rate Below !\n";
	cin>>y;
	cout<<"\nWhat Do You Want To Take! Increment Or Decrement ??";
	cout<<"\nPress 1 For Increment, Press 2 For Decrement, Press 3 For Both Increment And Decrement\n";
	cin>>ch;
	if(ch==1){
	do{ x=x+y;
	cout<<"\nIncremented Value= "<<x;}
	while(w==2);}
	else if(ch==2){do{ z=z-y;
	cout<<"\nDecremented Value= "<<z;}
	while(w==2);}
	else if(ch==3){do{x=x+y;
	cout<<"\nIncremented Value= "<<x;
	z=z-y;
	cout<<"\t\t\tDecremented Value= "<<z;}
	while(w==2);}
	else{"\nYou Entered The Wrong Digit";}
	return 0;
	getch();
}
