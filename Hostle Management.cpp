#include<iostream>
using namespace std;

class Management{
	public:
	void manager(){
		cout<<"Boys Hostle 1:\nBoys Hostle 2:\nBoys Hostle 3:\nGirls Hostle 1:\n";
	}
	void menu(){
		cout<<"1: Hostle Mess System\n2: Cook For Kitchen = 1\n3: Sweepers = 4\n4: Guards = 4\n5: Serving Boy = 1\n";
	}
	void permission(){
		cout<<"Permitted!";
	}
};
class salary:Management{
	public:
		double salaryOfManager;
		double salaryOfCook;
		double salaryOfSweeper;
		double salaryOfGuard;
		double salaryOfServingBoy;
		salary(){
			this->salaryOfManager=25000.0;
			this->salaryOfCook=15000.0;
			this->salaryOfGuard=15000.0;
			this->salaryOfServingBoy=5000.0;
			this->salaryOfSweeper=10000.0;
		}
		void salaryDetails(){
			cout<<"Salary Of Cook = "<<salaryOfCook<<endl;
			cout<<"Salary Of Sweepers = "<<salaryOfSweeper<<endl;
			cout<<"Salary Of Guards = "<<salaryOfGuard<<endl;
			cout<<"Salary Of ServingBoy = "<<salaryOfServingBoy<<endl;
		}
};
class hostle1:Management{
	public:
		string idCardNumber;
		string name;
		string rollNumber;
		void set(string idNo, string name, string rollNo){
			this->idCardNumber=idNo;
			this->name=name;
			this->rollNumber=rollNo;
		}
		void get(){
			cout<<"Details Of Hostle 1: \nID Card Number Is: "<<idCardNumber<<endl;
			cout<<"Name Is: "<<name<<endl;
			cout<<"Roll Number Is: "<<rollNumber<<endl;
		}
};
class hostle2:Management{
	public:
		string idCardNumber;
		string name;
		string rollNumber;
		void set(string idNo, string name, string rollNo){
			this->idCardNumber=idNo;
			this->name=name;
			this->rollNumber=rollNo;
		}
		void get(){
			cout<<"Details Of Hostle 2: \nID Card Number Is: "<<idCardNumber<<endl;
			cout<<"Name Is: "<<name<<endl;
			cout<<"Roll Number Is: "<<rollNumber<<endl;
		}
};
class hostle3:Management{
	public:
		string idCardNumber;
		string name;
		string rollNumber;
		void set(string idNo, string name, string rollNo){
			this->idCardNumber=idNo;
			this->name=name;
			this->rollNumber=rollNo;
		}
		void get(){
			cout<<"Details Of Hostle 3: \nID Card Number Is: "<<idCardNumber<<endl;
			cout<<"Name Is: "<<name<<endl;
			cout<<"Roll Number Is: "<<rollNumber<<endl;
		}
};
class GirlsHostle:Management{
	public:
		string idCardNumber;
		string name;
		string rollNumber;
		void set(string idNo, string name, string rollNo){
			this->idCardNumber=idNo;
			this->name=name;
			this->rollNumber=rollNo;
		}
		void get(){
			cout<<"Details Of Girls Hostle: \nID Card Number Is: "<<idCardNumber<<endl;
			cout<<"Name Is: "<<name<<endl;
			cout<<"Roll Number Is: "<<rollNumber<<endl;
		}
};

class mess:hostle1{
	public:
		bool breakfast;
		bool dinner;
		mess(bool bf,bool din){
			this->breakfast=bf;
			this->dinner=din;
		}
		void get(){
			cout<<"Values are Dinner: "<<dinner<<" Breakfast: "<<breakfast<<endl;
		}
};
class guests:hostle1{
	public:
		int totalGuests=0;
		void Note(){
			cout<<"Every Student Can Invite 3 Guests per Month for only two days!\n";
		}
		//Management m1;
		//m1.permission();
		void guestTotal(){
			cout<<"Enter The Total Guests For this particular Hostle: ";
			cin>>totalGuests;
				if(totalGuests>3){
				cout<<"\nYou can't invite more than 3 guests per month!";
			}
			else{
			
			cout<<"Total Guests Are: "<<totalGuests<<endl;
		}
		}
};
class clothes:hostle1{
	public:
		double totalRupeei=0;
		double totalRupeew=0;
		int piece;
		void rateList(){
			cout<<"5 Rs. Per piece For Ironing\n12 Rs. Per piece For Washing\n 15% for each cloth goes for the hostle management!\n";
		}
		void wash(){
			cout<<"Enter How Many Pieces for wash\n";
			cin>>piece;
			if(piece==0){
				totalRupeew=0;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==1){
				totalRupeew=12;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==2){
				totalRupeew=24;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==3){
				totalRupeew=36;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else{
				cout<<"\nNo more than 3 pieces allowed!";
			}
			
		}
		void iron(){
			cout<<"\nEnter How Many Pieces for Iron\n";
			cin>>piece;
			if(piece==0){
				totalRupeei=0;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==1){
				totalRupeei=5;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==2){
				totalRupeei=10;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==3){
				totalRupeei=15;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else{
				cout<<"\nNo more than 3 pieces allowed!";
			}
			
		}
		void totalPrice(){
		double totalPrice=0;
		totalPrice=totalRupeew+totalRupeei;
		cout<<"\nTotal Price For Iron And Wash Is: "<<totalPrice;
		}
		
};
class securitySystem:hostle1{
	public:
		guests gues;
		void questIdCard(){
			cout<<"Total Guests Are: "<<gues.totalGuests<<endl;
		}
		void guardShifts(){
			cout<<"Guards Shifts:\n1: Night Shift\n 2: Day Shift\n 3: Shift in Controll Room\n";
		}
		void extraCurriculam(){
			cout<<"ExtraCurriculam:\n1: Trip per Weekend\n 2: Bonfire Per Month\n";
		}
		void lostItems(){
			cout<<"There is a fine for every lost item e.g 100 Rs. For Lost Keys Etc.\n";
		}
};

class mess2:hostle2{
	public:
		bool breakfast;
		bool dinner;
		mess2(bool bf,bool din){
			this->breakfast=bf;
			this->dinner=din;
		}
		void get(){
			cout<<"Values are Dinner: "<<dinner<<" Breakfast: "<<breakfast<<endl;
		}
};
class guests2:hostle2{
	public:
		int totalGuests;
		void Note(){
			cout<<"Every Student Can Invite 3 Guests per Month for only two days!";
		}
	//	Management m1;
	//	m1.permission();
		void guestTotal(){
			cout<<"Enter The Total Guests For this particular Hostle!";
			cin>>totalGuests;
			if(totalGuests>3){
				cout<<"\nYou can't invite more than 3 guests per month!";
			}
			else{
			
			cout<<"Total Guests Are: "<<totalGuests<<endl;
		}
		}
};
class clothes2:hostle2{
	public:
		double totalRupeei=0;
		double totalRupeew=0;
		int piece;
		void rateList(){
			cout<<"5 Rs. Per piece For Ironing\n12 Rs. Per piece For Washing\n 15% for each cloth goes for the hostle management!\n";
		}
		void wash(){
			cout<<"Enter How Many Pieces for wash\n";
			cin>>piece;
			if(piece==0){
				totalRupeew=0;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==1){
				totalRupeew=12;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==2){
				totalRupeew=24;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==3){
				totalRupeew=36;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else{
				cout<<"\nNo more than 3 pieces allowed!";
			}
			
		}
		void iron(){
			cout<<"\nEnter How Many Pieces for Iron\n";
			cin>>piece;
			if(piece==0){
				totalRupeei=0;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==1){
				totalRupeei=5;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==2){
				totalRupeei=10;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==3){
				totalRupeei=15;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else{
				cout<<"\nNo more than 3 pieces allowed!";
			}
			
		}
		void totalPrice(){
		double totalPrice=0;
		totalPrice=totalRupeew+totalRupeei;
		cout<<"\nTotal Price For Iron And Wash Is: "<<totalPrice;
		}
};
class securitySystem2:hostle2{
	public:
		guests gues;
		void questIdCard(){
			cout<<"Total Guests Are: "<<gues.totalGuests<<endl;
		}
		void guardShifts(){
			cout<<"Guards Shifts:\n1: Night Shift\n 2: Day Shift\n 3: Shift in Controll Room\n";
		}
		void extraCurriculam(){
			cout<<"ExtraCurriculam:\n1: Trip per Weekend\n 2: Bonfire Per Month\n";
		}
		void lostItems(){
			cout<<"There is a fine for every lost item e.g 100 Rs. For Lost Keys Etc.\n";
		}
};

class mess3:hostle3{
	public:
		bool breakfast;
		bool dinner;
		mess3(bool bf,bool din){
			this->breakfast=bf;
			this->dinner=din;
		}
		void get(){
			cout<<"Values are Dinner: "<<dinner<<" Breakfast: "<<breakfast<<endl;
		}
};
class guests3:hostle3{
	public:
		int totalGuests;
		void Note(){
			cout<<"Every Student Can Invite 3 Guests per Month for only two days!\n";
		}
	//	Management m1;
	//	m1.permission();
		void guestTotal(){
			cout<<"Enter The Total Guests For this particular Hostle!\n";
			cin>>totalGuests;
				if(totalGuests>3){
				cout<<"\nYou can't invite more than 3 guests per month!";
			}
			else{
			
			cout<<"Total Guests Are: "<<totalGuests<<endl;
		}
		}
};
class clothes3:hostle3{
	public:
		double totalRupeei=0;
		double totalRupeew=0;
		int piece;
		void rateList(){
			cout<<"5 Rs. Per piece For Ironing\n12 Rs. Per piece For Washing\n 15% for each cloth goes for the hostle management!\n";
		}
		void wash(){
			cout<<"Enter How Many Pieces for wash\n";
			cin>>piece;
			if(piece==0){
				totalRupeew=0;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==1){
				totalRupeew=12;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==2){
				totalRupeew=24;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==3){
				totalRupeew=36;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else{
				cout<<"\nNo more than 3 pieces allowed!";
			}
			
		}
		void iron(){
			cout<<"\nEnter How Many Pieces for Iron\n";
			cin>>piece;
			if(piece==0){
				totalRupeei=0;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==1){
				totalRupeei=5;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==2){
				totalRupeei=10;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==3){
				totalRupeei=15;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else{
				cout<<"\nNo more than 3 pieces allowed!";
			}
			
		}
		void totalPrice(){
		double totalPrice=0;
		totalPrice=totalRupeew+totalRupeei;
		cout<<"\nTotal Price For Iron And Wash Is: "<<totalPrice;
		}
	
};
class securitySystem3:hostle3{
	public:
		guests gues;
		void questIdCard(){
			cout<<"Total Guests Are: "<<gues.totalGuests<<endl;
		}
		void guardShifts(){
			cout<<"Guards Shifts:\n1: Night Shift\n 2: Day Shift\n 3: Shift in Controll Room\n";
		}
		void extraCurriculam(){
			cout<<"ExtraCurriculam:\n1: Trip per Weekend\n 2: Bonfire Per Month\n";
		}
		void lostItems(){
			cout<<"There is a fine for every lost item e.g 100 Rs. For Lost Keys Etc.\n";
		}
};

class messgirls:GirlsHostle{
	public:
		bool breakfast;
		bool dinner;
		messgirls(bool bf,bool din){
			this->breakfast=bf;
			this->dinner=din;
		}
		void get(){
			cout<<"Values are Dinner: "<<dinner<<" Breakfast: "<<breakfast<<endl;
		}
};
class guestsgirls:GirlsHostle{
	public:
		int totalGuests;
		void Note(){
			cout<<"Every Student Can Invite 3 Guests per Month for only two days!";
		}
	//	Management m1;
	//	m1.permission();
		void guestTotal(){
			cout<<"Enter The Total Guests For this particular Hostle: ";
			cin>>totalGuests;
				if(totalGuests>3){
				cout<<"\nYou can't invite more than 3 guests per month!";
			}
			else{
			
			cout<<"Total Guests Are: "<<totalGuests<<endl;
		}
		}
};
class clothesgirls:GirlsHostle{
	public:
		double totalRupeei=0;
		double totalRupeew=0;
		int piece;
		void rateList(){
			cout<<"5 Rs. Per piece For Ironing\n12 Rs. Per piece For Washing\n 15% for each cloth goes for the hostle management!\n";
		}
		void wash(){
			cout<<"Enter How Many Pieces for wash\n";
			cin>>piece;
			if(piece==0){
				totalRupeew=0;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==1){
				totalRupeew=12;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==2){
				totalRupeew=24;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else if(piece==3){
				totalRupeew=36;
				cout<<"\nTotal Price is: "<<totalRupeew<<endl;
			}
			else{
				cout<<"\nNo more than 3 pieces allowed!";
			}
			
		}
		void iron(){
			cout<<"\nEnter How Many Pieces for Iron\n";
			cin>>piece;
			if(piece==0){
				totalRupeei=0;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==1){
				totalRupeei=5;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==2){
				totalRupeei=10;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else if(piece==3){
				totalRupeei=15;
				cout<<"\nTotal Price is: "<<totalRupeei<<endl;
			}
			else{
				cout<<"\nNo more than 3 pieces allowed!";
			}
			
		}
		void totalPrice(){
		double totalPrice=0;
		totalPrice=totalRupeew+totalRupeei;
		cout<<"\nTotal Price For Iron And Wash Is: "<<totalPrice;
		}
};
class securitySystemgirls:GirlsHostle{
	public:
		guests gues;
		void questIdCard(){
			cout<<"Total Guests Are: "<<gues.totalGuests<<endl;
		}
		void guardShifts(){
			cout<<"Guards Shifts:\n1: Night Shift\n 2: Day Shift\n 3: Shift in Controll Room\n";
		}
		void extraCurriculam(){
			cout<<"ExtraCurriculam:\n1: Trip per Weekend\n 2: Bonfire Per Month\n";
		}
		void lostItems(){
			cout<<"There is a fine for every lost item e.g 100 Rs. For Lost Keys Etc.\n";
		}
};

int main(){
	int choiceNum;
	char choice;
	do{
	cout<<"Select The Menu From Given Below!\n";
	cout<<"1: Management Details\n";
	cout<<"2: Salary Of Management Details\n";
	cout<<"3: Hostle 1 Of Management Details\n";
	cout<<"4: Hostle 2 Of Management Details\n";
	cout<<"5: Hostle 3 Of Management Details\n";
	cout<<"6: Girls Hostle Of Management Details\n";
	cout<<"7: Mess Of Hostle 1\n";
	cout<<"8: Guests Of Of Hostle 1\n";
	cout<<"9: Clothes Of Hostle 1\n";
	cout<<"10: Security Of Hostle 1\n";
	cout<<"11: Mess Of Hostle 2\n";
	cout<<"12: Guests Of Of Hostle 2\n";
	cout<<"13: Clothes Of Hostle 2\n";
	cout<<"14: Security Of Hostle 2\n";
	cout<<"15: Mess Of Hostle 3\n";
	cout<<"16: Guests Of Of Hostle 3\n";
	cout<<"17: Clothes Of Hostle 3\n";
	cout<<"18: Security Of Hostle 3\n";
	cout<<"19: Mess Of Girls Hostle\n";
	cout<<"20: Guests Of Girls Hostle\n";
	cout<<"21: Clothes Of Girls Hostle\n";
	cout<<"22: Security Of Girls Hostle\n";
	cin>>choiceNum;
	switch(choiceNum){
		case 1:
			{
			system("CLS");
			Management manage;
			manage.manager();
			manage.menu();
			break;}
		case 2:
			{system("CLS");
			salary mon;
			mon.salaryDetails();
			break;}
		case 3:
			{
			system("CLS");
			hostle1 hos;
			hos.set("36104----","Usman Ali","Biet------");
			hos.get();}
		case 4:{
			system("CLS");
			hostle2 hos2;
			hos2.set("11111","Abc","Biet---");
			hos2.get();
			break;
		}
		case 5:{
			system("CLS");
			hostle3 hos3;
			hos3.set("22222","Abcd","Biet----");
			hos3.get();
			break;
		}
		case 6:{
			system("CLS");
			GirlsHostle gh;
			gh.set("000000","Nimra","Biet---");
			gh.get();
			break;
		}
		case 7:{
			system("CLS");
			mess m(true,true);
			m.get();
			break;
		}
		case 8:{
			system("CLS");
			guests g;
			g.Note();
			cout<<endl;
			g.guestTotal();
			break;
		}
		case 9:{
			system("CLS");
			clothes cl;
			cl.rateList();
			cl.wash();
			cl.iron();
			cl.totalPrice();
			break;
		}
		case 10:{
			system("CLS");
			securitySystem sec;
			sec.questIdCard();
			sec.guardShifts();
			sec.extraCurriculam();
			sec.lostItems();
			break;
		}
		case 11:{
			system("CLS");
			mess2 m2(true,true);
			m2.get();
			break;
		}
		case 12:{
			system("CLS");
			guests2 g2;
			g2.Note();
			cout<<endl;
			g2.guestTotal();
			break;
		}
		case 13:{
			system("CLS");
			clothes2 cl2;
			cl2.rateList();
			cl2.wash();
			cl2.iron();
			cl2.totalPrice();
			break;
		}
		case 14:{
			system("CLS");
			securitySystem2 sec2;
			sec2.questIdCard();
			sec2.guardShifts();
			sec2.extraCurriculam();
			sec2.lostItems();
			break;
		}
		case 15:{
			system("CLS");
			mess3 m3(true,true);
			m3.get();
			break;
		}
		case 16:{
			system("CLS");
			guests3 g3;
			g3.Note();
			cout<<endl;
			g3.guestTotal();
			break;
		}
		case 17:{
			system("CLS");
			clothes3 cl3;
			cl3.rateList();
			cl3.wash();
			cl3.iron();
			cl3.totalPrice();
			break;
		}
		case 18:{
			system("CLS");
			securitySystem3 sec3;
			sec3.questIdCard();
			sec3.guardShifts();
			sec3.extraCurriculam();
			sec3.lostItems();
			break;
		}
		case 19:{
			system("CLS");
			messgirls mg(true,true);
			mg.get();
			break;
		}
		case 20:{
			system("CLS");
			guestsgirls ggs;
			ggs.Note();
			cout<<endl;
			ggs.guestTotal();
			break;
		}
		case 21:{
			system("CLS");
			clothesgirls cg;
			cg.rateList();
			cg.wash();
			cg.iron();
			cg.totalPrice();
			break;
		}
		case 22:{
			system("CLS");
			securitySystemgirls secg;
			secg.questIdCard();
			secg.guardShifts();
			secg.extraCurriculam();
			secg.lostItems();
			break;
		}
		default:{
			cout<<"Invalid Choice";
			break;
		}
	}
	cout<<"\n\n\t\tDo You Want To Continue (Y/N) ?\n";
	cin>>choice;
	system("CLS");
	}while(choice=='y' || choice=='Y');
}
