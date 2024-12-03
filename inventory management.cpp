#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
// Here I Declare All The Functions I Need
void header();
void pause();
void banner(string);
int mainMenu();
int adminMenu();
int customerMenu();
void statusOfStocks();
void transactions();
bool newStock(string, int);
bool newItem(string, int, int);
void customerOrder(string, int);
int productPrice(string);
void listItems();
bool addFeedback(string);
int getItemIndex(string);
int getMaxIndex(int[], int);
void sortArray(int[]);
void swap(int, int);
void load();
void store();
string getField(string, int);
int convertToInt(string);
void listFeedbacks();
const int MAX_ITEMS = 30;
string itemNames[MAX_ITEMS];
int itemPrices[MAX_ITEMS];
int itemCounts[MAX_ITEMS];
int itemSold[MAX_ITEMS];
int nStocks = 0;
string feedbackBox[MAX_ITEMS];
int feedbackCount = 0;
int tmpInt, totalCash = 0;
string tmpString;
int main(){// Main Function From Where The Program Will Actually Start
	int option;
	string reasonReturn;
	load();
	while(true){
		header();
		option = mainMenu();
		if(option == 1){
			while(true){
				option = adminMenu();

				if(option == 1){
					banner("			User > Manager > Status of stocks");
					statusOfStocks();
				}
				else if(option == 2){
					banner("			User > Manager > Sales");
					transactions();
				}
				else if(option == 3){
					banner("			User > Manager > New stock");

					cout << "Drug Name: ";
					cin >> tmpString;
					cout << "Stock Quantity: ";
					cin >> tmpInt;

					if(!newStock(tmpString, tmpInt)){
						cout << tmpString << " not found in stock" << endl;
					}
				}
				else if(option == 4){
					banner("			User > Manager > New item");

					cout << "Drug Name: ";
					cin >> tmpString;
					cout << "Price: ";
					cin >> tmpInt;
					cout << "Stock Quantity: ";
					cin >> option;

					if(!newItem(tmpString, tmpInt, option)){
						cout << "We cannot add more new items" << endl;
					}
			}
				else if(option == 5){
					banner("			User > Manager > Feedback Box");
					listFeedbacks();
				}
				else if(option == 6) {
					break;
				}
				else {
					cout << "Invalid option" << endl;
				}
				pause();
			}
		}
		else if(option == 2){
			while(true){
				option = customerMenu();

				if(option == 1){
					banner("			User > Customer > Buy product");

					listItems();
					sortArray(itemSold);
					if(nStocks > 0){
						cout << "Recommended Item: " << itemNames[0] << endl;
					}

					cout << "Item Name: ";
					cin >> tmpString;

					tmpInt = getItemIndex(tmpString);

					if(tmpInt != -1){
						cout << "Quantity: ";
						cin >> tmpInt;

						customerOrder(tmpString, tmpInt);
					}
					else {
						cout << tmpString << " is not available here" << endl;
					}
				}
				else if(option == 2){
					banner("			User > Customer > Product price");

					cout << "Product name: ";
					cin >> tmpString;

					tmpInt = productPrice(tmpString);

					if(tmpInt != 0){
						cout << "Price: Rs. " << tmpInt << "/-" << endl;
					}
					else {
						cout << "We don't have " << tmpString << endl;
					}
				}
				else if(option == 3){
					banner("			User > Customer > List of items");

					listItems();                    
				}
				else if(option == 4){
					banner("			User > Customer > Feedback");
					cout << "Enter feedback: ";
					getline(cin >> ws, tmpString);

					if(!addFeedback(tmpString)){
						cout << "Something went wrong" << endl;
					}
					else {
						cout << "Your feedback has been added" << endl;
					}
				}
				else if(option == 5){
					break;
				}
				else {
					cout << "Invalid option";
				}
				pause();
			}
		}
		else if(option == 3){
			break;
		}
		else {
			cout << "Invalid option" << endl;
		}
		pause();
	}
	store();
}
void pause(){
	cin.ignore();
	getchar();
}
void header(){// This Will Print The Heading Lines of The Project
	system("cls"); // To Clear The Previous Screen So that Next Part Of The Program Will Be Printed Seperately On the Screen
	wcout << L"\u00da\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00bf" << endl
		 << L"\u00b3 Medical Store Management System [Developed By Usman Ali ==> Biet-F21-054] \u00b3" << endl
		 << L"\u00c0\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00d9" << endl << endl;
}
void banner(string s){//For Heading and For The Navigation Line
	header();
	cout << s << endl;
	wcout << L"\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4\u00c4" << endl;
}
int mainMenu(){// Menu For The Customer and End User
	int opt;
	cout << "			Select User: " << endl
		<< "			1. Manager" << endl
		<< "			2. Customer (Self Service For Customer)" << endl
		<< "			3. Exit" << endl;
	cin >> opt;
	return opt;
}
int adminMenu(){// Admin Controlls
	int opt;

	banner("			User > Manager");
	cout << "			1. View status of stocks" << endl
		<< "			2. View sales and total cash" << endl
		<< "			3. Add new stock" << endl
		<< "			4. Add new item" << endl
		<< "			5. View feedbacks" << endl
		<< "			6. Go back to main menu" << endl;
	cin >> opt;

	return opt;
}
int customerMenu(){   // Customer Controlls
	int opt;

	banner("			User > Customer");
	cout << "			1. Buy product(s)" << endl
		<< "			2. View price of product" << endl
		<< "			3. Get list of items available" << endl
		<< "			4. Add feedback" << endl
		<< "			5. Go back to main menu" << endl;
	cin >> opt;

	return opt;
}
void statusOfStocks(){// Stock Size
	if(nStocks != 0){
		sortArray(itemCounts);

		for(int i = 0; i < nStocks; i++){
			cout << itemNames[i] << ": " << itemCounts[i] << endl;
		}
	}
	else {
		cout << "No item in stock" << endl;
	}
}
void transactions(){// Transactions
	if(nStocks != 0){
		sortArray(itemSold);

		for(int i = 0; i < nStocks; i++){
			cout << itemNames[i] << ": " << itemSold[i] << endl; 
		}
	}
	else {
		cout << "No item sold" << endl;
	}

	cout << "Total Cash: Rs. " << totalCash << "/-" << endl;
}
bool newStock(string drugName, int drugCount){ //Stock Adjustments
	int idx = getItemIndex(drugName);

	if(idx != -1){
		itemCounts[idx] += drugCount;
		return true;
	}
	else {
		return false;
	}
}
bool newItem(string drugName, int price, int count){ //Item Adjustments
	if(nStocks < MAX_ITEMS){
		
		itemNames[nStocks] = drugName;
		itemPrices[nStocks] = price;
		itemCounts[nStocks] = count;

		nStocks++;
		return true;
	}
	else {
		return false;
	}}
void customerOrder(string drugName, int qty){ //Customer Orders
	int idx = getItemIndex(drugName);
	int total = 0;

	if(idx != -1){
		if(qty > itemCounts[idx]){
			cout << "We don't have that much in stock" << endl;
		}
		else {
			itemCounts[idx] -= qty;
			itemSold[idx] += qty;
			total = qty * itemPrices[idx];
		}
	}
	if(total != 0){
		cout << "Your total is Rs. " << total << "/-"<< endl;
		totalCash += total;
	}
}
void listItems(){   //All Items Will Be Counted
	sortArray(itemCounts);

	tmpInt = 0;
	for(int i = 0; i < nStocks; i++){
		if(itemCounts[i] != 0){
			cout << tmpInt + 1 << ". " << itemNames[i] << endl;
			tmpInt++;
		}
	}
}
int productPrice(string drugName){ //Product Prices are here
	int idx = getItemIndex(drugName);

	if(idx != -1){
		return itemPrices[idx];
	}
	return 0;
}
bool addFeedback(string feedback){  //For Taking Customer FeedBacks
	if(feedbackCount < MAX_ITEMS){
		feedbackBox[feedbackCount] = feedback;
		feedbackCount++;
		return true;
	}
	else {
		return false;
	}
}
int getItemIndex(string name){
	for(int i = 0; i < nStocks; i++){
		if(itemNames[i] == name){
			return i;
		}
	}

	return -1;
}
void sortArray(int array[]){
	for(int i = 0; i < nStocks; i++){
		swap(i, getMaxIndex(array, i));
	}
}
int getMaxIndex(int array[], int start){
	int max = start;

	for(int i = start; i < nStocks; i++){
		if(array[i] > array[max]){
			max = i;
		}
	}
	return max;
}
void swap(int idx1, int idx2){
	tmpString = itemNames[idx1];
	itemNames[idx1] = itemNames[idx2];
	itemNames[idx2] = tmpString;

	tmpInt = itemPrices[idx1];
	itemPrices[idx1] = itemPrices[idx2];
	itemPrices[idx2] = tmpInt;

	tmpInt = itemCounts[idx1];
	itemCounts[idx1] = itemCounts[idx2];
	itemCounts[idx2] = tmpInt;

	tmpInt = itemSold[idx1];
	itemSold[idx1] = itemSold[idx2];
	itemSold[idx2] = tmpInt;
}
void store(){   //INformation About The Store
	fstream file;
	file.open("projectData.txt", ios::out);
	for (int i = 0; i < nStocks; i++) {
		file << itemNames[i] << ","
			<< itemPrices[i] << ","
			<< itemCounts[i] << ","
			<< itemSold[i] << endl;
	}
	file << endl;
	for (int i = 0; i < feedbackCount; i++) {
		file << feedbackBox[i] << endl;
	}
	file << endl;
	file.close();
}
void load(){  //INformation About The Store
	fstream file;
	string line = "";
	nStocks = 0;
	feedbackCount = 0;
	file.open("projectData.txt", ios::in);
	while(!file.eof()){
		getline(file, line);

		if(line == ""){
			break;
		}
		itemNames[nStocks] = getField(line, 0);
		itemPrices[nStocks] = convertToInt(getField(line, 1));
		itemCounts[nStocks] = convertToInt(getField(line, 2));
		itemSold[nStocks] = convertToInt(getField(line, 3));
		nStocks++;
	}
	while(!file.eof()){
		getline(file, line);

		if(line == ""){
			break;
		}
		feedbackBox[feedbackCount] = line;
		feedbackCount++;
	}
	while(!file.eof()){
		getline(file, line);

		if(line == ""){
			break;
		}
	}
	while(!file.eof()){
		getline(file, line);

		if(line == ""){
			break;
		}
	}
	file.close();
}
string getField(string record, int field){
	int seps = 0;
	string ret = "";
	char sep = ',';

	for(int i = 0; i < record.length(); i++){
		if(record[i] == sep){
			seps++;
			continue;
		}
		else if(seps == field){
			ret += record[i];
		}
		else if(seps > field){
			break;
		}
	}

	return ret;
}
int convertToInt(string orig){
	int n = 0, idx = 0;
	int sign = 1;
	bool signChecked = false;

	while(orig[idx] != '\0'){
		if(orig[idx] == ' '){
			continue;
		}

		if((orig[idx] == '-' || orig[idx] == '+') && !signChecked){
			if(orig[idx] == '-'){
				sign = -1;
			}
			signChecked = true;
		}
		else if(orig[idx] >= '0' && orig[idx] <= '9'){
			n = n * 10 + orig[idx] - '0';
		}
		else {
			break;
		}
		idx++;
	}
	return sign * n;
}
void listFeedbacks(){
	if(feedbackCount > 0){
		for(int i = 0; i < feedbackCount; i++){
			cout << i + 1 << ". " << feedbackBox[i] << endl;
		}
	}
	else {
		cout << "No feedbacks yet" << endl;
	}
}
