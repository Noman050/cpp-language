#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  int a,b,c,n;
   char z;
do
{  
   cout<<"Enter First Number\n";
   cin>>a;
   cout<<"Enter 2nd Number\n";
   cin>>b;
   cout<<"Enter 3rd Number\n";
   cin>>c;
   cout<<"What Operation Do You Want To Do\nPress 1 For Addition\nPress 2 For Subtraction\nPress 3 For Multiplication\n";
   cout<<"Press 4 For Division\nPress 5 For Modulus\n";
   cin>>n;
   if(n==1){cout<<"Addition Of Three Numbers Is = "<<a+b+c;}
   if(n==2){cout<<"\nSubtraction Of Three Numbers Is = "<<a-b-c;}
   if(n==3){cout<<"\nMultiplication Of Three Numbers Is = "<<a*b*c;}
   if(n==4){cout<<"\nDivision Of Three Numbers Is = "<<(a/b)/c;}
   if(n==5){cout<<"\nModulus Of Three Numbers Is = "<<(a%b)%c;}
   if(n>5 || n==0){cout<<"Wrong Input\n";}
   cout<<"\n\nDo You Want To Continue y/n ??\n\n";
   z=getch();
}
   while(z=='y');
   getch();
   return 0;
}
