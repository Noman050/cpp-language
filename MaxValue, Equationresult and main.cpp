#include<iostream>
using namespace std;

void maxResult(float q1,float q2,float q3);
void calculateEquationResult(float x,float a,float b,float c,float d);

int main(){
	char ch;
	do{
	float x=0,a=0,b=0,c=0,d=0,max;
	cout<<"Enter The Values of X , A , B , C , and D Respectively\n";
	cin>>x>>a>>b>>c>>d;
    calculateEquationResult(x,a,b,c,d);
    cout<<"\nDo you want to perform any other Calculation(Y/N): ";
	cin>>ch;
     }while(ch=='Y' || ch =='y');
}

void maxReslut(float eq1,float eq2,float eq3){
   if(eq1 > eq2 && eq1 > eq3){
   		cout<<"\nEquation 1 Result is Maximum";
	}
    else if(eq2 > eq1 && eq2> eq3){
    	cout<<"\nEquation 2 Result is Maximum";
	}
	else if(eq3 > eq2 && eq3 > eq1){
		cout<<"\n\nEquation 3 Result is Maximum";
	}
    else{
   		cout<<"\nAll Numbers Are Equal";
	}
}

void calculateEquationResult(float x,float a,float b,float c,float d){
	float eq1=0,eq2=0,eq3=0,max=0;
	eq1=(x+(b/(3*c)));
	eq2=(3*a*c - b*b)/(3*a*a);
	eq3=(2*(b*b*b) -9*(a+b+c) + 27*(a*a*d))/(27+(a*a*a));
	cout<<"\nEquation 1: "<<eq1<<"\nEquation 2: "<<eq2<<"\nEquation 3: "<<eq3;
	maxReslut(eq1,eq2,eq3)
}
