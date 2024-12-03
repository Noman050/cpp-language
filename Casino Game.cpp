#include <iostream>
#include <conio.h>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
using namespace std;
 
void drawLine(int n, char symbol);
void rules();
 
int main()
{
    string playerName,s;
    long long int amount; // hold player's balance amount
    int bettingAmount; 
    int guess;
    int dice; // hold computer generated number
    char choice;
    srand(time(0)); // "Seed" the random generator
    drawLine(60,'-');
    cout<<"\t\tEnter Casino Entrance Key\n";
    drawLine(60,'-');
    getline(cin,s);
if(s=="shahkandries"||s=="Shahkandries"||s=="SHAHKANDRIES"){
    system("cls");
    
	drawLine(80,'_');
    drawLine(80,'+');
    cout << "\n\n\t\tWELLCOME TO THE BROTHERHOOD CASINO \n\n";
    drawLine(80,'_');
	drawLine(80,'+');
    
    cout << "\n\nEnter Your Name : ";
    getline(cin, playerName);
system("cls");
       drawLine(40,'>');
       cout<<"\n\tPlaying: "<<playerName<<"\n\n";
       drawLine(40,'<');
    cout << "\n\nEnter Deposit Amount To Play The Game : $";
    cin >> amount;
    
    do
    {
        system("cls");
        rules();
        cout << "\n\nYour Current Balance Is $ " << amount << "\n";
		
		// Get player's betting amount
        do
        {
        	
            cout<<playerName<<" Enter Money To Bet : $";
            cin >> bettingAmount;
            if(bettingAmount > amount)
                cout << "\nYour Betting Amount Is More Than Your Current Balance\n"
                       <<"\nRe-Enter Amount\n ";
        }while(bettingAmount > amount);
 
		// Get player's numbers
        do
        {
            cout << "\nGuess A Number Between 1 to 10 To Win The Bet :";
        
		    cin >> guess;
        
		    if(guess <= 0 || guess > 10)
               
			    cout << "\nPlease Check The Number!! It Should Be Between 1 To 10\n"<<"\nRe-Enter Number\n ";
        
		}while(guess <= 0 || guess > 10);
 
        dice = rand()%9 + 1; // Will hold the randomly generated integer between 1 and 10
    
        if(dice == guess)
        {
        
	        cout << "\n\nGood Luck!! You Won $" << bettingAmount * 10;
        
		    amount = amount + bettingAmount * 10;
        }
        else
        {
            cout <<"\nBad Luck this time !! You lost $"<< bettingAmount <<"\n";
        
		    amount = amount - bettingAmount;
        }
 
        cout << "\nThe Winning Number Was : " << dice <<"\n";
        
		cout << "\n"<<playerName<<", You have $" << amount << "\n";
        
		if(amount == 0)
        {
            cout << "You have no money to play ";
        
		    break;
        }
        
        cout << "\n\n==> Do You Want To Play Again (y/n)? ";		
        
		cin >> choice;
    
	}while(choice =='Y'|| choice=='y');
    
    cout << "\n\n\n";
    system("cls");
    drawLine(60,'.');
    
	cout << "\n\n\tThanks For Playing :) \n\tYour Balance Amount Is $" << amount << "\n\n";
   
    drawLine(60,'.');
 
}
else
{
	system("cls");
	
	drawLine(84,'.');
	
	drawLine(84,'.');
    
	cout<<"\n\t\tYour Password Is Wrong You Are Not Allowed To Enter In The Casino !!\n\n";
    
	drawLine(84,'.');
    
	drawLine(84,'.');
}
getch();
return 0;
}
 
void drawLine(int n, char symbol)
{
    for(int i=0; i<n; i++)
    
	cout << symbol;
    
	cout << "\n" ;
}
 
void rules()
{
    system("cls");
    
	cout << "\n";
    
	drawLine(80,'*');
    
	cout << "\n\t\t\t\tRULES OF THE GAME\n\n";
    
	drawLine(80,'*');
    
	cout << "\t\t1. Choose Any Number Between 1 to 10\n";
    
	cout << "\t\t2. If You Win You Will Get 10 Times Of Money You Bet\n";
    
	cout << "\t\t3. If You Bet On Wrong Number You Will Lose Your Betting Amount\n\n";
    
	drawLine(80,'*');

}
 
// END OF PROGRAM