#include <iostream>
#include <conio.h>
#include <string> 
#include <cstdlib> // use for random numbers
#include <ctime>   //use for time(0)
using namespace std;
 
void chbuit(int,char);    //accepts an integer and a characterz

void laws()    //function for rules and regulations
{
    system("cls");
    
	cout << "\n";
    
	cout<<"\t\t";chbuit(80,'_');
	
	cout<<"\t\t";chbuit(80,'-');
    
	cout << "\n\t\t\t\tRULES OF THE GAME\n\n";
    
	cout<<"\t\t";chbuit(80,'_');
    
	cout<<"\t\t";chbuit(80,'-');
	
	cout << "\n\t\t\t1. Choose Any Number Between 1 to 9\n";
    
	cout << "\t\t\t2. If You Win You Will Get 3 Times Of Money You Bet\n";
    
	cout << "\t\t\t3. If You Bet On Wrong Number You Will Lose Your Betting Amount\n\n";
    
	cout<<"\t\t";chbuit(80,'_');
	
	cout<<"\t\t";chbuit(80,'-');

}

    int main()

{
    string pn,s;
    
	long int amnt; // keep player's balance amount
    
	int ba; // used for bet amount
    
	int gss; // gss used for guess
    
	int flg; // keep computer generated number
    
	char ch;
    
	srand(time(0));
    
	cout<<"\t\t\t";chbuit(60,'-');
    
	cout<<"\t\t\t\t\tEnter Casino Entrance Key\n";
    
	cout<<"\t\t\t";chbuit(60,'-');
    
	cout<<"\t\t\t";getline(cin,s);
    
	if(s=="comsats"||s=="Comsats"||s=="COMSATS"){
    
	system("cls");
    
	cout<<"\t\t";chbuit(72,'_');
    
	cout<<"\t\t";chbuit(72,'+');
    
	cout << "\n\n\t\t\t\tWELLCOME TO THE Royal CASINO \n\n";
    
	cout<<"\t\t";chbuit(72,'_');
	
	cout<<"\t\t";chbuit(72,'+');
    
    cout << "\n\n\t\tEnter Your Name : ";
    
	getline(cin, pn);
    
	system("cls");
    
	cout<<"\t\t\t";chbuit(47,'>');
    
	cout<<"\n\t\t\t\t\tPlaying: "<<pn<<"\n\n";
    
	cout<<"\t\t\t";chbuit(47,'<');
    
	cout << "\n\n\t\t\tEnter Deposit Amount To Play The Game : $";
    
	cin >> amnt;
    
	do
    {
        system("cls");
        
		laws();
        
		cout << "\n\n\t\tYour Current Balance Is $ " << amnt<< "\n";
		
	
        do
        {
        	
            cout<<"\t\t";cout<<pn<<" Enter Money To Bet : $";
           
		    cin >> ba;
           
		    if(ba >amnt)
            
			cout << "\nYour Betting Amount Is More Than Your Current Balance\n"<<"\nRe-Enter Amount\n ";
        
		}while(ba >amnt);
 
        do
        {
            cout << "\n\t\tGuess A Number Between 1 to 9 To Win The Bet :";
        
		    cin >> gss;
        
		    if(gss <= 0 || gss > 10)
               
			cout << "\n\t\tPlease Check The Number!! It Should Be Between 1 To 10\n"<<"\nRe-Enter Number\n ";
        
		}while(gss <= 0 || gss > 10);
 
        flg = rand()%9 + 1; // Will keep the randomly generated integer between 1 and 10
    
        if(flg == gss)
        {
        
	        cout << "\n\n\t\tGood Luck!! You Won $" << ba *3;
        
		    amnt= amnt+ ba *3;
        }
        
		else
        
		{
            cout <<"\n\t\tBad Luck this time !! You lost $"<< ba <<"\n";
        
		    amnt= amnt- ba;
        }
 
        cout << "\n\t\tThe Winning Number Was : " << flg <<"\n";
        
		cout << "\n\t\t"<<pn<<", You have $" << amnt<< "\n";
        
		if(amnt== 0)
        {
            cout << "\t\tYou have no money to play ";
        
		    break;
        }
        
        cout << "\n\n\t==> Do You Want To Play Again (y/n)? ";		
        
		cin >> ch;
    
	}while(ch =='Y'|| ch=='y');
    
    cout << "\n\n\n";
    
	system("cls");
    
	chbuit(60,'.');
    
	cout << "\n\n\tThanks For Playing :) \n\tYour Balance Amount Is $" << amnt<< "\n\n";
   
    chbuit(60,'.');
 
}

else

{
	system("cls");
	
	chbuit(84,'.');
	
	chbuit(84,'.');
    
	cout<<"\n\t\tYour Password Is Wrong You Are Not Allowed To Enter In The Casino !!\n\n";
    
	chbuit(84,'.');
    
	chbuit(84,'.');
}

getch();

return 0;

}
 
void chbuit(int z, char ch)

{
    for(int n=0; n<z; n++)
    
	cout <<ch<<endl;
    
	cout <<"\n";
}
