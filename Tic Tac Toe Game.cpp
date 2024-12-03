#include<iostream>
using namespace std;
char box[10]={'o','1','2','3','4','5','6','7','8','9'};
int abouzar();
void output();
void function(int a, char ch)
	{
		for(int i=0; i<a; i++)
		cout<<ch;
	}
int main()
{

	int player = 1,i,choice;
	char mark;
	do
	{
		output();
		if(player%2==1)
		player=1; 
		else if (player%2==0)
		player=2;
        cout<<"\n\t";function(50,'*');
		cout << "\n\t\t\n\t\t  Player " << player << ": Enter a number:-\n  ";
		cout<<"\n\t";function(50,'*');
		cout<<"\n\t\t";cin >> choice; 
		if(player==1)
		mark='*'; 
		else
		mark='-'; 
		if (choice == 1 && box[1] == '1')
			box[1] = mark;
		else if (choice == 2 && box[2] == '2')
			box[2] = mark;
		else if (choice == 3 && box[3] == '3')
			box[3] = mark;
		else if (choice == 4 && box[4] == '4')
			box[4] = mark;
		else if (choice == 5 && box[5] == '5')
			box[5] = mark;
		else if (choice == 6 && box[6] == '6')
			box[6] = mark;
		else if (choice == 7 && box[7] == '7')
			box[7] = mark;
		else if (choice == 8 && box[8] == '8')
			box[8] = mark;
		else if (choice == 9 && box[9] == '9')
			box[9] = mark;
		else
		{
			cout<<"Invalid move ";
			player--; 
			cin.ignore();
			cin.get();
		}
		i=abouzar(); 
		player++; 
		}
	while(i==-1);
    output();
	if(i==1)
	cout<<"\t\t==>\aPlayer "<<--player<<" Has won!";
	else
    cout<<"==>\aGame draw";
	cin.ignore();
	cin.get();
	return 0;
}
int abouzar()
{
	if (box[1] == box[2] && box[2] == box[3])
	return 1;
	else if (box[4] == box[5] && box[5] == box[6])
	return 1;
	else if (box[7] == box[8] && box[8] == box[9])
	return 1;
	else if (box[1] == box[4] && box[4] == box[7])
	return 1;
	else if (box[2] == box[5] && box[5] == box[8])
	return 1;
	else if (box[3] == box[6] && box[6] == box[9])
	return 1;
	else if (box[1] == box[5] && box[5] == box[9])
	return 1;
	else if (box[3] == box[5] && box[5] == box[7])
	return 1;
	else if (box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9')
	return 0;
	else
	return -1;
}
void output()
{ 
    system("cls"); 
 	cout << "\n\n\t\t\t  Tic Tac Toe\n\n";
	cout<<"\t\t  ";cout << "Player 1 (*)  -  Player 2 (-)" << endl << endl;
	cout << endl;
	cout<<"\t\t\t";cout << "     |     |     " << endl;
	cout<<"\t\t\t";cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;
	cout<<"\t\t\t";cout << "_____|_____|_____" << endl;
	cout<<"\t\t\t";cout << "     |     |     " << endl;
	cout<<"\t\t\t";cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;
	cout<<"\t\t\t";cout << "_____|_____|_____" << endl;
	cout<<"\t\t\t";cout << "     |     |     " << endl;
	cout<<"\t\t\t";cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;
	cout<<"\t\t\t";cout << "     |     |     " << endl << endl;
}
