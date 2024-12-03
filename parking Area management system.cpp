
#include<iostream> 
using namespace std;
int main()
{
	int r,c,b,m=0,amount=0,total,total_veh=0,choice;
	while(true)
	{
		cout<<"welcom to parking Area"<<endl;
		cout<<"\n press 1:for Rikshaws"<<endl;
		cout<<"press 2:for cars"<<endl;
		cout<<"press 3:for buses"<<endl;
		cout<<"press 4:for Moter cycle"<<endl;
		cout<<"press 5:for show record"<<endl;
		cout<<"press 6:for delete all record"<<endl;
		cout<<"\n Enter choice:";
		cin>>choice;
		switch (choice)
		{
			case 1:
			r++;
			amount=amount+100;
			total_veh++;
			cout<<"Add 1 Rikshaw in record "<<endl;
			system("pause");
			system("cls");
			break;
			case 2:
			c++;
			amount=amount+200;
			total_veh++;
			cout<<"Add 1 car in record "<<endl;
				system("pause");
			system("cls");
			break;
			case 3:
			b++;
			amount=amount+300;
			total_veh++;
			cout<<"Add 1 Bus in record "<<endl;
				system("pause");
			system("cls");
			break;
			case 4:
			m++;
			amount=amount+50;
			total_veh++;
			cout<<"Add 1 Moter cycle in record "<<endl;
				system("pause");
			system("cls");
			break;
			case 5:
			cout<<"Total amount="<<amount<<endl;
			cout<<"total vehical\t"<<total<< total_veh<<endl;
			cout<<"Rikshaws"<<r<<endl;
			cout<<"cars"<<c<<endl;
			cout<<"Buses"<<b<<endl;
			cout<<"Moter cycle"<<m<<endl;
				system("pause");
			system("cls");
			break;
			case 6:
			r=0,c=0,b=0,m=0,amount=0, total_veh=0;
			cout<<"\n\n Delete record"<<endl;
			break;
			default:
			cout<<"\n\n invalid input"<<endl;
				system("pause");
				
			system("cls");
}
	}
}
