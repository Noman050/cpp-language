#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
	int Marks,Grade;
	char name[50];
	char ch;
	do{
	cout<<"Enter Your Name\n";
    cin>>name;
	cout<<"Enter Obtained Marks\n";
	cin>>Marks;
	if(Marks>=90)
{cout<<"Congratulations\t" <<name<<" You Got => A <= Grade";}
else if(Marks>=80 && Marks<90)
{cout<<name<<" You Grade Is => B <=\n";}
else if(Marks>=70 && Marks<80)
{cout<<name<<" Your Grade Is => C <=\n";}
else if(Marks>=60 && Marks<70)
{cout<<name<<" Your Grade Is => D <=\n";}
else{cout<<name<<" Sorry! To Tell You That You Have Failed";}
cout<<"\n\nDo You Want To Continue y/n ??\n\n";
ch=getch();
}while(ch=='y');
return 0;
}
