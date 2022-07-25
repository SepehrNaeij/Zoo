#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<cstdlib>
#include<math.h>
#include<conio.h>
#include<windows.h>

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);  // for setting the colors of the thems.

using namespace std;

//*******************<The name of functions>*******************

void welcome();
void bye();
void print();
void closeTheApp();
void addAnimal();
void searchAnimal();
void showCage();
void showAnimal();
void elderyAnimal();
void isDomestic();
void isVegetrian();
void sortByAge();

//*******************<The duty of functions>*******************

void welcome(){
	system("cls");
	system("color 03");
	cout<<"                       ***********************************************************************              ";
	cout<<"                                   *              <<<    Welcome to my Zoo    >>>                    *"<<endl;
	cout<<"                       ***********************************************************************              "<<endl;
	cout<<"========================================================================================================================";
}
void bye(){
	welcome();
	SetConsoleTextAttribute(h,04);
	cout<<endl;
	cout<<"\n"<<"Thanks for using us,"<<"Have a nice day."<<"\n";
	SetConsoleTextAttribute(h,07);
}
void print() {
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Main->>"<<endl<<endl;
	cout<<"1. Add Animal"<<endl;
	cout<<"2. Show Animal"<<endl;
	cout<<"3. Search Animal"<<endl;
	cout<<"4. Show Cage(with odd number)"<<endl;
	cout<<"5. Close The App"<<endl;	
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(h,07);
	cin>>a; 
	SetConsoleTextAttribute(h,02);
	system("cls");
	if ( a!=1 && a!=2 && a!=3 && a!=4 && a!=5) {
	do{
		welcome();
		SetConsoleTextAttribute(h,07);
		cout<<endl<<endl<<"<<-Main->>"<<endl<<endl;
		cout<<"1. Add Animal"<<endl;
		cout<<"2. Show Animal"<<endl;
		cout<<"3. Search Animal"<<endl;
		cout<<"4. Show Cage"<<endl;
		cout<<"5. Close The App"<<endl;
		SetConsoleTextAttribute(h,02);
		cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list(from 1 to 5) : ";
		SetConsoleTextAttribute(h,07);
		cin>>a;
		if ( a==1 || a==2 || a==3 || a==4 || a==5)
		break;
		cout<<"\n";
		system("cls");
	}while( a!=1 || a!=2 || a!=3 || a!=4 || a!=5 );
	system("cls");
	welcome();
	}
	switch(a){
		case 1:
			addAnimal();
			break;
		case 2:
			showAnimal();
			break;	
		case 3:
			searchAnimal();
			break;
		case 4:
			showCage();
			break;		
		case 5:
			closeTheApp();
			break;
	}
	
}
void closeTheApp(){
	int a,b;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Close the App->>"<<endl<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Are you sure to close the app...?!?"<<"\n"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"1. Yes"<<endl;
	cout<<"2. No"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(h,07);	
	cin>>a; 
	system("cls");
	if ( a!=1 && a!=2 ) {
	do{
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Close the App->>"<<endl<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Are you sure to close the app...?!?"<<"\n"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"1. Yes"<<endl;
	cout<<"2. No"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list(from 1 to 2) : ";
	SetConsoleTextAttribute(h,07);
	cin>>a;
	if ( a==1 || a==2 )
	break;
	cout<<"\n";
	system("cls");
	}while( a!=1 || a!=2);
	system("cls");
	welcome();
	}
	switch(a){
		case 1:
			bye();
			break;
		case 2:
			print();
			break;	
	}
}
void addAnimal(){
	welcome();
	SetConsoleTextAttribute(h,07);
	int a,b,c;
	string Result,result[1000];
	string s1,s2,s3,s4,s5,s6;   //   [s1: name]  &&&&  [s2: color]  &&&&  [s3: age]  &&&&  [s4: the number of cage]  &&&&  [s5: domestic or wild]  &&&&  [s6: vegetrian or carnivorous]
	cout<<endl<<endl<<"<<-Add Animal->>"<<endl<<endl;
	cout<<"Name: ";
	cin>>s1;
	cout<<"Color: ";
	cin>>s2;
	cout<<"Age: ";
	cin>>b;
	cout<<"The Number Of Cage: ";
	cin>>c;
	cout<<"Domestic Or Wild: ";
	cin>>s5;
	cout<<"Vegetrian Or Carnivorous: ";
	cin>>s6;
	stringstream ss1,ss2;
	ss1<<b;
	ss2<<c;
	ss1>>s3;
	ss2>>s4;				
	string list = s1 + " " + s2 + " " + s3 + " " + s4 + " " + s5 + " " + s6 + " ";
	ifstream file("animals.txt"); // here a file with name 'animals.txt' is made.
	
	file>>result[0];file>>result[1];file>>result[2];file>>result[3];file>>result[4];file>>result[5];file>>result[6];    //It's for transmit the information about new manager to our file with name animals.txt
	file>>result[7];file>>result[8];file>>result[9];file>>result[10];file>>result[11];file>>result[12];file>>result[13];//It's for transmit the information about new manager to our file with name animals.txt
	file>>result[14];file>>result[15];file>>result[16];file>>result[17];file>>result[18];file>>result[19];			    //It's for transmit the information about new manager to our file with name animals.txt
	file>>result[20];file>>result[21];file>>result[22];file>>result[23];file>>result[24];file>>result[25];              //It's for transmit the information about new manager to our file with name animals.txt
	file>>result[26];file>>result[27];file>>result[28];file>>result[29];file>>result[30];file>>result[31];              //It's for transmit the information about new manager to our file with name animals.txt	
	file>>result[32];file>>result[33];file>>result[34];file>>result[35];file>>result[36];file>>result[37];			    //It's for transmit the information about new manager to our file with name animals.txt
	file>>result[38];file>>result[39];file>>result[40];file>>result[41];file>>result[42];file>>result[43];              //It's for transmit the information about new manager to our file with name animals.txt
	file>>result[44];file>>result[45];file>>result[46];file>>result[47];file>>result[48];file>>result[49];              //It's for transmit the information about new manager to our file with name animals.txt	
	file>>result[50];file>>result[51];file>>result[52];file>>result[53];file>>result[54];file>>result[55];              //It's for transmit the information about new manager to our file with name animals.txt	
	file>>result[56];file>>result[57];file>>result[58];file>>result[59];file>>result[60];file>>result[61];              //It's for transmit the information about new manager to our file with name animals.txt	
	file>>result[62];file>>result[63];file>>result[64];file>>result[65];file>>result[66];							    //It's for transmit the information about new manager to our file with name animals.txt	
			
	Result = list + result[0] + " " + result[1] + " " + result[2] + " " + result[3] + " " + result[4] + " " + result[5] + " " + result[6] + " " + result[7] + " " + result[8] + " " + result[9]
	+ " " + result[10] + " " + result[11] + " " + result[12] + " " + result[13] + " " + result[14] + " " + result[15] + " " + result[16] + " " + result[17] + " " + result[18] + " " + result[19];
	+ " " + result[20] + " " + result[21] + " " + result[22] + " " + result[23] + " " + result[24] + " " + result[25] + " " + result[26] + " " + result[27] + " " + result[28] + " " + result[29];
	+ " " + result[30] + " " + result[31] + " " + result[32] + " " + result[33] + " " + result[34] + " " + result[35] + " " + result[36] + " " + result[37] + " " + result[38] + " " + result[39];
	+ " " + result[40] + " " + result[41] + " " + result[42] + " " + result[43] + " " + result[44] + " " + result[45] + " " + result[46] + " " + result[47] + " " + result[48] + " " + result[49];
	+ " " + result[50] + " " + result[51] + " " + result[52] + " " + result[53] + " " + result[54] + " " + result[55] + " " + result[56] + " " + result[57] + " " + result[58] + " " + result[59];
	+ " " + result[60] + " " + result[61] + " " + result[62] + " " + result[63] + " " + result[64] + " " + result[65] + " " + result[66];
	
	ofstream myfile("animals.txt");
	myfile<<Result;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"The animal with this name: ";
	SetConsoleTextAttribute(h,06);
	cout<<s1;
	SetConsoleTextAttribute(h,07);
	cout<<" is successfully added to the animalList."<<endl<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number to exit: ";
	SetConsoleTextAttribute(h,07);
	cin>>a;
	print();	
}
void searchAnimal(){
	int a,b,k,S[100];
	string s,x[100];
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Search Animal->>"<<endl<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Enter a Animal name : ";
	SetConsoleTextAttribute(h,07);
	cin>>s;

	ifstream myfile("animals.txt");

	myfile>> x[0];myfile>> x[1];myfile>>S[2]; myfile>>S[3]; myfile>>x[4]; myfile>>x[5]; myfile>>x[6];   //It's for transmit the information about new member to our file with name animals.txt
	myfile>> x[7];myfile>> S[8];myfile>>S[9]; myfile>>x[10];myfile>>x[11];myfile>>x[12];myfile>>x[13];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[14];myfile>>S[15];myfile>>x[16];myfile>>x[17];myfile>>x[18];myfile>>x[19];myfile>>S[20];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[21];myfile>>x[22];myfile>>x[23];myfile>>x[24];myfile>>x[25];myfile>>S[26];myfile>>S[27];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[28];myfile>>x[29];myfile>>x[30];myfile>>x[31];myfile>>S[32];myfile>>S[33];myfile>>x[34];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[35];myfile>>x[36];myfile>>x[37];myfile>>S[38];myfile>>S[39];myfile>>x[40];myfile>>x[41];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[42];myfile>>x[43];myfile>>S[44];myfile>>S[45];myfile>>x[46];myfile>>x[47]; 				//It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[48];myfile>>x[49];myfile>>S[50];myfile>>S[51];myfile>>x[52];myfile>>x[53];myfile>>x[54];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[55];myfile>>S[56];myfile>>S[57];myfile>>x[58];myfile>>x[59];myfile>>x[60];myfile>>x[61];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[62];myfile>>S[63];myfile>>x[64];myfile>>x[65];myfile>>x[66];				                //It's for transmit the information about new member to our file with name animals.txt
	
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Search Animal->>"<<endl<<endl;	
	cout<<"  name  |  color  | age | number of cage | domestic or wild | vegetrian or carnivorous "<<endl;
	cout<<"________|_________|_____|________________|__________________|__________________________"<<endl;
	SetConsoleTextAttribute(h,06);		
	
	if ( s==x[0] ){
		cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
	}else if ( s==x[6] ){
		cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
	}else if ( s==x[12] ){
		cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
	}else if ( s==x[18] ){
		cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
	}else if ( s==x[24] ){
		cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
	}else if ( s==x[30] ){
		cout<<"  "<<x[30]<<"     "<<x[31]<<"      "<<S[32]<<"          "<<S[33]<<"              "<<x[34]<<"              "<<x[35]<<endl;
	}else if ( s==x[36] ){
		cout<<"  "<<x[36]<<"     "<<x[37]<<"      "<<S[38]<<"          "<<S[39]<<"              "<<x[40]<<"             "<<x[41]<<endl;
	}else if ( s==x[42] ){
		cout<<"  "<<x[42]<<"     "<<x[43]<<"      "<<S[44]<<"          "<<S[45]<<"              "<<x[46]<<"              "<<x[47]<<endl;
	}else if ( s==x[48] ){
		cout<<"  "<<x[48]<<"     "<<x[49]<<"      "<<S[50]<<"          "<<S[51]<<"              "<<x[52]<<"             "<<x[53]<<endl;
	}else if ( s==x[54] ){
		cout<<"  "<<x[54]<<"     "<<x[55]<<"      "<<S[56]<<"          "<<S[57]<<"              "<<x[58]<<"              "<<x[59]<<endl;
	}else if ( s==x[60] ){
		cout<<"  "<<x[60]<<"     "<<x[61]<<"      "<<S[62]<<"          "<<S[63]<<"              "<<x[64]<<"             "<<x[65]<<endl;
	}else{
	SetConsoleTextAttribute(h,04);
	cout<<endl<<endl<<"There isn't any animal with the name '";
	SetConsoleTextAttribute(h,06);
	cout<<s;
	SetConsoleTextAttribute(h,04);
	cout<<"' in this Zoo!!!"<<endl;
	}
	
	SetConsoleTextAttribute(h,02);	
	cout<<endl<<endl<<"Enter a number to exit: ";
	SetConsoleTextAttribute(h,07);
	cin>>a;
	print(); 
}
void showCage(){
	int a,S[100];
	string s,x[100];

	ifstream myfile("animals.txt");

	myfile>> x[0];myfile>> x[1];myfile>>S[2]; myfile>>S[3]; myfile>>x[4]; myfile>>x[5]; myfile>>x[6];   //It's for transmit the information about new member to our file with name animals.txt
	myfile>> x[7];myfile>> S[8];myfile>>S[9]; myfile>>x[10];myfile>>x[11];myfile>>x[12];myfile>>x[13];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[14];myfile>>S[15];myfile>>x[16];myfile>>x[17];myfile>>x[18];myfile>>x[19];myfile>>S[20];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[21];myfile>>x[22];myfile>>x[23];myfile>>x[24];myfile>>x[25];myfile>>S[26];myfile>>S[27];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[28];myfile>>x[29];myfile>>x[30];myfile>>x[31];myfile>>S[32];myfile>>S[33];myfile>>x[34];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[35];myfile>>x[36];myfile>>x[37];myfile>>S[38];myfile>>S[39];myfile>>x[40];myfile>>x[41];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[42];myfile>>x[43];myfile>>x[43];myfile>>S[44];myfile>>S[45];myfile>>x[46];myfile>>x[47];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[48];myfile>>x[49];myfile>>S[50];myfile>>S[51];myfile>>x[52];myfile>>x[53];myfile>>x[54];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[55];myfile>>S[56];myfile>>S[57];myfile>>x[58];myfile>>x[59];myfile>>x[60];myfile>>x[61];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[62];myfile>>S[63];myfile>>x[64];myfile>>x[65];myfile>>x[66];				                //It's for transmit the information about new member to our file with name animals.txt	
	
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Show Cage->>"<<endl<<endl;	
	cout<<"  name  |  color  |  age  | number of cage | domestic or wild | vegetrian or carnivorous "<<endl;
	cout<<"________|_________|_______|________________|__________________|__________________________"<<endl;
	SetConsoleTextAttribute(h,06);
	if ( S[3]%2==1 && S[3]<500 ){
			cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
	}
	if ( S[9]%2==1 && S[9]<500 ){
			cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
	}
	if ( S[15]%2==1 && S[15]<500 ){
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
	}
	if ( S[21]%2==1 && S[21]<500 ){
			cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
	}
	if ( S[27]%2==1 && S[27]<500 ){
			cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
	}
	if ( S[33]%2==1 && S[33]<500 ){
			cout<<"  "<<x[30]<<"     "<<x[31]<<"      "<<S[32]<<"          "<<S[33]<<"              "<<x[34]<<"              "<<x[35]<<endl;
	}
	if ( S[39]%2==1 && S[39]<500 ){
			cout<<"  "<<x[36]<<"     "<<x[37]<<"      "<<S[38]<<"          "<<S[39]<<"              "<<x[40]<<"             "<<x[41]<<endl;
	}
	if ( S[45]%2==1 && S[45]<500 ){
			cout<<"  "<<x[42]<<"     "<<x[43]<<"      "<<S[44]<<"          "<<S[45]<<"              "<<x[46]<<"              "<<x[47]<<endl;
	}
	if ( S[51]%2==1 && S[51]<500 ){
			cout<<"  "<<x[48]<<"     "<<x[49]<<"      "<<S[50]<<"          "<<S[51]<<"              "<<x[52]<<"             "<<x[53]<<endl;
	}
	if ( S[57]%2==1 && S[57]<500 ){
			cout<<"  "<<x[54]<<"     "<<x[55]<<"      "<<S[56]<<"          "<<S[57]<<"              "<<x[58]<<"              "<<x[59]<<endl;
	}
	if ( S[63]%2==1 && S[63]<500 ){
			cout<<"  "<<x[60]<<"     "<<x[61]<<"      "<<S[62]<<"          "<<S[63]<<"              "<<x[64]<<"             "<<x[65]<<endl;
	}					
	SetConsoleTextAttribute(h,02);
	cout<<endl<<endl<<"Enter a number to exit: ";	
	SetConsoleTextAttribute(h,07);
	cin>>a;
	print();	
}
void showAnimal(){
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Show Animal->>"<<endl<<endl;
	cout<<"1. Eldery Animal(more than 10)"<<endl;
	cout<<"2. Is Domestic"<<endl;
	cout<<"3. Sort By Age"<<endl;
	cout<<"4. Is Vegetrian"<<endl;
	cout<<"5. Exit"<<endl;	
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(h,07);
	cin>>a; 
	SetConsoleTextAttribute(h,02);
	system("cls");
	if ( a!=1 && a!=2 && a!=3 && a!=4 && a!=5) {
	do{
		welcome();
		SetConsoleTextAttribute(h,07);
		cout<<endl<<endl<<"<<-Show Animal->>"<<endl<<endl;
		cout<<"1. Eldery Animal(more than 10)"<<endl;
		cout<<"2. Is Domestic"<<endl;
		cout<<"3. Sort By Age"<<endl;
		cout<<"4. Is Vegetrian"<<endl;
		cout<<"5. Exit"<<endl;
		SetConsoleTextAttribute(h,02);
		cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list(from 1 to 5) : ";
		SetConsoleTextAttribute(h,07);
		cin>>a;
		if ( a==1 || a==2 || a==3 || a==4 || a==5)
		break;
		cout<<"\n";
		system("cls");
	}while( a!=1 || a!=2 || a!=3 || a!=4 || a!=5 );
	system("cls");
	welcome();
	}
	
	switch(a){
		case 1:
			elderyAnimal();
			break;
		case 2:
			isDomestic();
			break;
		case 3:
			sortByAge();
			break;	
		case 4:
			isVegetrian();
			break;				
		case 5:
			print();
			break;
	}
	
}	
void elderyAnimal(){
	int a,S[100];
	string x[100];

	ifstream myfile("animals.txt");

	myfile>> x[0];myfile>> x[1];myfile>>S[2]; myfile>>S[3]; myfile>>x[4]; myfile>>x[5]; myfile>>x[6];   //It's for transmit the information about new member to our file with name animals.txt
	myfile>> x[7];myfile>> S[8];myfile>>S[9]; myfile>>x[10];myfile>>x[11];myfile>>x[12];myfile>>x[13];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[14];myfile>>S[15];myfile>>x[16];myfile>>x[17];myfile>>x[18];myfile>>x[19];myfile>>S[20];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[21];myfile>>x[22];myfile>>x[23];myfile>>x[24];myfile>>x[25];myfile>>S[26];myfile>>S[27];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[28];myfile>>x[29];myfile>>x[30];myfile>>x[31];myfile>>S[32];myfile>>S[33];myfile>>x[34];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[35];myfile>>x[36];myfile>>x[37];myfile>>S[38];myfile>>S[39];myfile>>x[40];myfile>>x[41];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[42];myfile>>x[43];myfile>>S[44];myfile>>S[45];myfile>>x[46];myfile>>x[47]; 				//It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[48];myfile>>x[49];myfile>>S[50];myfile>>S[51];myfile>>x[52];myfile>>x[53];myfile>>x[54];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[55];myfile>>S[56];myfile>>S[57];myfile>>x[58];myfile>>x[59];myfile>>x[60];myfile>>x[61];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[62];myfile>>S[63];myfile>>x[64];myfile>>x[65];myfile>>x[66];				                //It's for transmit the information about new member to our file with name animals.txt
	
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Eldery Animal->>"<<endl<<endl;	
	cout<<"  name  |  color  |  age  | number of cage | domestic or wild | vegetrian or carnivorous "<<endl;
	cout<<"________|_________|_______|________________|__________________|__________________________"<<endl;
	SetConsoleTextAttribute(h,06);
	if ( S[2]>10 && S[2]<100 ){
			cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
	}
	if ( S[8]>10 && S[8]<100 ){
			cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
	}
	if ( S[14]>10 && S[14]<100 ){
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
	}
	if ( S[20]>10 && S[20]<100 ){
			cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
	}
	if ( S[26]>10 && S[26]<100 ){
			cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
	}
	if ( S[32]>10 && S[32]<100 ){
			cout<<"  "<<x[30]<<"     "<<x[31]<<"      "<<S[32]<<"          "<<S[33]<<"              "<<x[34]<<"              "<<x[35]<<endl;
	}
	if ( S[38]>10 && S[38]<100 ){
			cout<<"  "<<x[36]<<"     "<<x[37]<<"      "<<S[38]<<"          "<<S[39]<<"              "<<x[40]<<"             "<<x[41]<<endl;
	}
	if ( S[44]>10 && S[44]<100 ){
			cout<<"  "<<x[42]<<"     "<<x[43]<<"      "<<S[44]<<"          "<<S[45]<<"              "<<x[46]<<"              "<<x[47]<<endl;
	}
//	if ( S[50]>10 && S[50]<100 ){
//			cout<<"  "<<x[48]<<"     "<<x[49]<<"      "<<S[50]<<"          "<<S[51]<<"              "<<x[52]<<"             "<<x[53]<<endl;
//	}
	if ( S[56]>10 && S[56]<100 ){
			cout<<"  "<<x[54]<<"     "<<x[55]<<"      "<<S[56]<<"          "<<S[57]<<"              "<<x[58]<<"              "<<x[59]<<endl;
	}
	if ( S[62]>10 && S[62]<100 ){
			cout<<"  "<<x[60]<<"     "<<x[61]<<"      "<<S[62]<<"          "<<S[63]<<"              "<<x[64]<<"             "<<x[65]<<endl;
	}					
	SetConsoleTextAttribute(h,02);
	cout<<endl<<endl<<"Enter a number to exit: ";	
	SetConsoleTextAttribute(h,07);
	cin>>a;
	showAnimal();	
}
void isDomestic(){
	int a,S[100];
	string x[100];

	ifstream myfile("animals.txt");

	myfile>> x[0];myfile>> x[1];myfile>>S[2]; myfile>>S[3]; myfile>>x[4]; myfile>>x[5]; myfile>>x[6];   //It's for transmit the information about new member to our file with name animals.txt
	myfile>> x[7];myfile>> S[8];myfile>>S[9]; myfile>>x[10];myfile>>x[11];myfile>>x[12];myfile>>x[13];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[14];myfile>>S[15];myfile>>x[16];myfile>>x[17];myfile>>x[18];myfile>>x[19];myfile>>S[20];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[21];myfile>>x[22];myfile>>x[23];myfile>>x[24];myfile>>x[25];myfile>>S[26];myfile>>S[27];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[28];myfile>>x[29];myfile>>x[30];myfile>>x[31];myfile>>S[32];myfile>>S[33];myfile>>x[34];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[35];myfile>>x[36];myfile>>x[37];myfile>>S[38];myfile>>S[39];myfile>>x[40];myfile>>x[41];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[42];myfile>>x[43];myfile>>S[44];myfile>>S[45];myfile>>x[46];myfile>>x[47]; 				//It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[48];myfile>>x[49];myfile>>S[50];myfile>>S[51];myfile>>x[52];myfile>>x[53];myfile>>x[54];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[55];myfile>>S[56];myfile>>S[57];myfile>>x[58];myfile>>x[59];myfile>>x[60];myfile>>x[61];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[62];myfile>>S[63];myfile>>x[64];myfile>>x[65];myfile>>x[66];				                //It's for transmit the information about new member to our file with name animals.txt
	
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Is Domestic->>"<<endl<<endl;	
	cout<<"  name  |  color  |  age  | number of cage | domestic or wild | vegetrian or carnivorous "<<endl;
	cout<<"________|_________|_______|________________|__________________|__________________________"<<endl;
	SetConsoleTextAttribute(h,06);	
	if ( x[4]=="Domestic" || x[4]=="domestic" ){
			cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
	}
	if ( x[10]=="Domestic" || x[10]=="domestic" ){
			cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
	}
	if ( x[16]=="Domestic" || x[16]=="domestic" ){
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
	}
	if ( x[22]=="Domestic" || x[22]=="domestic" ){
			cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
	}
	if ( x[28]=="Domestic" || x[28]=="domestic" ){
			cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
	}
	if ( x[34]=="Domestic" || x[34]=="domestic" ){
			cout<<"  "<<x[30]<<"     "<<x[31]<<"      "<<S[32]<<"          "<<S[33]<<"              "<<x[34]<<"              "<<x[35]<<endl;
	}
	if ( x[40]=="Domestic" || x[40]=="domestic" ){
			cout<<"  "<<x[36]<<"     "<<x[37]<<"      "<<S[38]<<"          "<<S[39]<<"              "<<x[40]<<"             "<<x[41]<<endl;
	}
	if ( x[46]=="Domestic" || x[46]=="domestic" ){
			cout<<"  "<<x[42]<<"     "<<x[43]<<"      "<<S[44]<<"          "<<S[45]<<"              "<<x[46]<<"              "<<x[47]<<endl;
	}
	if ( x[52]=="Domestic" || x[52]=="domestic" ){
			cout<<"  "<<x[48]<<"     "<<x[49]<<"      "<<S[50]<<"          "<<S[51]<<"              "<<x[52]<<"             "<<x[53]<<endl;
	}
	if ( x[58]=="Domestic" || x[58]=="domestic" ){
			cout<<"  "<<x[54]<<"     "<<x[55]<<"      "<<S[56]<<"          "<<S[57]<<"              "<<x[58]<<"              "<<x[59]<<endl;
	}
	if ( x[64]=="Domestic" || x[64]=="domestic" ){
			cout<<"  "<<x[60]<<"     "<<x[61]<<"      "<<S[62]<<"          "<<S[63]<<"              "<<x[64]<<"             "<<x[65]<<endl;
	}					
	SetConsoleTextAttribute(h,02);
	cout<<endl<<endl<<"Enter a number to exit: ";	
	SetConsoleTextAttribute(h,07);
	cin>>a;
	showAnimal();	
}
void isVegetrian(){
	int a,S[100];
	string x[100];

	ifstream myfile("animals.txt");

	myfile>> x[0];myfile>> x[1];myfile>>S[2]; myfile>>S[3]; myfile>>x[4]; myfile>>x[5]; myfile>>x[6];   //It's for transmit the information about new member to our file with name animals.txt
	myfile>> x[7];myfile>> S[8];myfile>>S[9]; myfile>>x[10];myfile>>x[11];myfile>>x[12];myfile>>x[13];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[14];myfile>>S[15];myfile>>x[16];myfile>>x[17];myfile>>x[18];myfile>>x[19];myfile>>S[20];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[21];myfile>>x[22];myfile>>x[23];myfile>>x[24];myfile>>x[25];myfile>>S[26];myfile>>S[27];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[28];myfile>>x[29];myfile>>x[30];myfile>>x[31];myfile>>S[32];myfile>>S[33];myfile>>x[34];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[35];myfile>>x[36];myfile>>x[37];myfile>>S[38];myfile>>S[39];myfile>>x[40];myfile>>x[41];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[42];myfile>>x[43];myfile>>S[44];myfile>>S[45];myfile>>x[46];myfile>>x[47]; 				//It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[48];myfile>>x[49];myfile>>S[50];myfile>>S[51];myfile>>x[52];myfile>>x[53];myfile>>x[54];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[55];myfile>>S[56];myfile>>S[57];myfile>>x[58];myfile>>x[59];myfile>>x[60];myfile>>x[61];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[62];myfile>>S[63];myfile>>x[64];myfile>>x[65];myfile>>x[66];				                //It's for transmit the information about new member to our file with name animals.txt
	
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Is Vegetrian->>"<<endl<<endl;
	SetConsoleTextAttribute(h,04);
	cout<<"***This schedule is for carnivorous animals***"<<endl<<endl;
	SetConsoleTextAttribute(h,07);	
	cout<<"  name  |  color  |  age  | number of cage | domestic or wild | vegetrian or carnivorous "<<endl;
	cout<<"________|_________|_______|________________|__________________|__________________________"<<endl;
	SetConsoleTextAttribute(h,06);	
	if ( x[5]=="Carnivorous" || x[5]=="carnivorous" ){
			cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
	}
	if ( x[11]=="Carnivorous" || x[11]=="carnivorous" ){
			cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
	}
	if ( x[17]=="Carnivorous" || x[17]=="carnivorous" ){
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
	}
	if ( x[23]=="Carnivorous" || x[23]=="carnivorous" ){
			cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
	}
	if ( x[29]=="Carnivorous" || x[29]=="carnivorous" ){
			cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
	}
	if ( x[35]=="Carnivorous" || x[35]=="carnivorous" ){
			cout<<"  "<<x[30]<<"     "<<x[31]<<"      "<<S[32]<<"          "<<S[33]<<"              "<<x[34]<<"              "<<x[35]<<endl;
	}
	if ( x[41]=="Carnivorous" || x[41]=="carnivorous" ){
			cout<<"  "<<x[36]<<"     "<<x[37]<<"      "<<S[38]<<"          "<<S[39]<<"              "<<x[40]<<"             "<<x[41]<<endl;
	}
	if ( x[47]=="Carnivorous" || x[47]=="carnivorous" ){
			cout<<"  "<<x[42]<<"     "<<x[43]<<"      "<<S[44]<<"          "<<S[45]<<"              "<<x[46]<<"              "<<x[47]<<endl;
	}
	if ( x[53]=="Carnivorous" || x[53]=="carnivorous" ){
			cout<<"  "<<x[48]<<"     "<<x[49]<<"      "<<S[50]<<"          "<<S[51]<<"              "<<x[52]<<"             "<<x[53]<<endl;
	}
	if ( x[59]=="Carnivorous" || x[59]=="carnivorous" ){
			cout<<"  "<<x[54]<<"     "<<x[55]<<"      "<<S[56]<<"          "<<S[57]<<"              "<<x[58]<<"              "<<x[59]<<endl;
	}
	if ( x[65]=="Carnivorous" || x[65]=="carnivorous" ){
			cout<<"  "<<x[60]<<"     "<<x[61]<<"      "<<S[62]<<"          "<<S[63]<<"              "<<x[64]<<"             "<<x[65]<<endl;
	}
	cout<<endl;
	SetConsoleTextAttribute(h,04);
	cout<<"***This schedule is for vegetrian animals***"<<endl<<endl;
	SetConsoleTextAttribute(h,07);	
	cout<<"  name  |  color  |  age  | number of cage | domestic or wild | vegetrian or carnivorous "<<endl;
	cout<<"________|_________|_______|________________|__________________|__________________________"<<endl;
	SetConsoleTextAttribute(h,06);	
	if ( x[5]=="Vegetrian" || x[5]=="vegetrian" ){
			cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
	}
	if ( x[11]=="Vegetrian" || x[11]=="vegetrian" ){
			cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
	}
	if ( x[17]=="Vegetrian" || x[17]=="vegetrian" ){
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
	}
	if ( x[23]=="Vegetrian" || x[23]=="vegetrian" ){
			cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
	}
	if ( x[29]=="Vegetrian" || x[29]=="vegetrian" ){
			cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
	}
	if ( x[35]=="Vegetrian" || x[35]=="vegetrian" ){
			cout<<"  "<<x[30]<<"     "<<x[31]<<"      "<<S[32]<<"          "<<S[33]<<"              "<<x[34]<<"              "<<x[35]<<endl;
	}
	if ( x[41]=="Vegetrian" || x[41]=="vegetrian" ){
			cout<<"  "<<x[36]<<"     "<<x[37]<<"      "<<S[38]<<"          "<<S[39]<<"              "<<x[40]<<"             "<<x[41]<<endl;
	}
	if ( x[47]=="Vegetrian" || x[47]=="vegetrian" ){
			cout<<"  "<<x[42]<<"     "<<x[43]<<"      "<<S[44]<<"          "<<S[45]<<"              "<<x[46]<<"              "<<x[47]<<endl;
	}
	if ( x[53]=="Vegetrian" || x[53]=="vegetrian" ){
			cout<<"  "<<x[48]<<"     "<<x[49]<<"      "<<S[50]<<"          "<<S[51]<<"              "<<x[52]<<"             "<<x[53]<<endl;
	}
	if ( x[59]=="Vegetrian" || x[59]=="vegetrian" ){
			cout<<"  "<<x[54]<<"     "<<x[55]<<"      "<<S[56]<<"          "<<S[57]<<"              "<<x[58]<<"              "<<x[59]<<endl;
	}
	if ( x[65]=="Vegetrian" || x[65]=="vegetrian" ){
			cout<<"  "<<x[60]<<"     "<<x[61]<<"      "<<S[62]<<"          "<<S[63]<<"              "<<x[64]<<"             "<<x[65]<<endl;
	}						
	SetConsoleTextAttribute(h,02);
	cout<<endl<<endl<<"Enter a number to exit: ";	
	SetConsoleTextAttribute(h,07);
	cin>>a;
	showAnimal();	
}
void sortByAge(){
	int a,S[100],max1,max2;
	string x[100];

	ifstream myfile("animals.txt");

	myfile>> x[0];myfile>> x[1];myfile>>S[2]; myfile>>S[3]; myfile>>x[4]; myfile>>x[5]; myfile>>x[6];   //It's for transmit the information about new member to our file with name animals.txt
	myfile>> x[7];myfile>> S[8];myfile>>S[9]; myfile>>x[10];myfile>>x[11];myfile>>x[12];myfile>>x[13];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[14];myfile>>S[15];myfile>>x[16];myfile>>x[17];myfile>>x[18];myfile>>x[19];myfile>>S[20];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[21];myfile>>x[22];myfile>>x[23];myfile>>x[24];myfile>>x[25];myfile>>S[26];myfile>>S[27];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[28];myfile>>x[29];myfile>>x[30];myfile>>x[31];myfile>>S[32];myfile>>S[33];myfile>>x[34];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[35];myfile>>x[36];myfile>>x[37];myfile>>S[38];myfile>>S[39];myfile>>x[40];myfile>>x[41];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[42];myfile>>x[43];myfile>>S[44];myfile>>S[45];myfile>>x[46];myfile>>x[47]; 				//It's for transmit the information about new member to our file with name animals.txt
	myfile>>x[48];myfile>>x[49];myfile>>S[50];myfile>>S[51];myfile>>x[52];myfile>>x[53];myfile>>x[54];  //It's for transmit the information about new member to our file with name animals.txt	
	myfile>>x[55];myfile>>S[56];myfile>>S[57];myfile>>x[58];myfile>>x[59];myfile>>x[60];myfile>>x[61];  //It's for transmit the information about new member to our file with name animals.txt
	myfile>>S[62];myfile>>S[63];myfile>>x[64];myfile>>x[65];myfile>>x[66];				                //It's for transmit the information about new member to our file with name animals.txt
	
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Sort By Age->>"<<endl<<endl;
	SetConsoleTextAttribute(h,04);
	cout<<"***This schedule is sorted by the age of animals***"<<endl<<endl;
	SetConsoleTextAttribute(h,07);	
	cout<<"  name  |  color  |  age  | number of cage | domestic or wild | vegetrian or carnivorous "<<endl;
	cout<<"________|_________|_______|________________|__________________|__________________________"<<endl;
	SetConsoleTextAttribute(h,06);	
	
	if ( S[2]>100 ) S[2]=0;
	if ( S[8]>100 ) S[8]=0;
	if ( S[14]>100 ) S[14]=0;
	if ( S[20]>100 ) S[20]=0;
	if ( S[26]>100 ) S[26]=0;
	
	
	if ( S[2]>=S[8] && S[2]>=S[14] && S[2]>=S[20] && S[2]>=S[26] ){
		cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
		if ( S[8]>=S[14] && S[8]>=S[20] && S[8]>=S[26]){
			if ( S[8]!=0 )
			cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
			if ( S[14]>=S[20] && S[14]>=S[26] ){
				if ( S[14]!=0 )
				cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
				if ( S[20]>=S[26] ){
					if (S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
					if ( S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
				}else{
					if ( S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
					if (S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;					
				}
			}else if(S[20]>=S[14] && S[20]>=S[26] ){
				if ( S[20]!=0 )
				cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
				if ( S[14]>=S[26] ){
					if (S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
					if ( S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
				}else{
					if ( S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
					if (S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;					
				}				
			}else{
				if ( S[26]!=0 )
				cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
				if ( S[14]>=S[20] ){
					if (S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
					if ( S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
				}else{
					if ( S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
					if (S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;					
				}					
			}
		}else if ( S[14]>=S[8] && S[14]>=S[20] && S[14]>=S[26]){
			if ( S[14]!=0 )
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
			if ( S[8]>=S[20] && S[8]>=S[26] ){
				if ( S[8]!=0 )
				cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
				if ( S[26]>=S[20] ){
					if (S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
					if ( S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
				}else{
					if ( S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
					if (S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;					
				}				
			}else if(S[20]>=S[8] && S[20]>=S[26] ){
				if ( S[20]!=0 )
				cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
				if ( S[26]>=S[8] ){
					if (S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
				}else{
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
					if (S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;					
				}				
			}else{
				if ( S[26]!=0 )
				cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
				if ( S[20]>=S[8] ){
					if (S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
				}else{
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
					if (S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;					
				}				
			}
		}else if ( S[20]>=S[8] && S[20]>=S[14] && S[20]>=S[26]){
			if ( S[20]!=0 )
			cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
			if ( S[8]>=S[14] && S[8]>=S[26] ){
				if ( S[8]!=0 )
				cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
				if ( S[26]>=S[14] ){
					if (S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
					if ( S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
				}else{
					if ( S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
					if (S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;					
				}			
			}else if(S[14]>=S[8] && S[14]>=S[26] ){
				if ( S[14]!=0 )
				cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
				if ( S[26]>=S[8] ){
					if (S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
				}else{
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
					if (S[26]!=0 )
					cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;					
				}				
			}else{
				if ( S[26]!=0 )
				cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
				if ( S[14]>=S[8] ){
					if (S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
				}else{
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
					if (S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;					
				}				
			}
		}else if ( S[26]>=S[8] && S[26]>=S[14] && S[26]>=S[20]){
			if ( S[26]!=0 )
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
			if ( S[8]>=S[14] && S[8]>=S[20] ){
				if ( S[8]!=0 )
				cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
				if ( S[14]>=S[20] ){
					if (S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
					if ( S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
				}else{
					if ( S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
					if (S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;					
				}				
			}else if(S[14]>=S[8] && S[14]>=S[20] ){
				if ( S[14]!=0 )
				cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
				if ( S[20]>=S[8] ){
					if (S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
				}else{
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
					if (S[20]!=0 )
					cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;					
				}				
			}else{
				if ( S[20]!=0 )
				cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
				if ( S[14]>=S[8] ){
					if (S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
				}else{
					if ( S[8]!=0 )
					cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
					if (S[14]!=0 )
					cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;					
				}				
			}
		}
	}
	if ( S[8]>=S[2] && S[8]>=S[14] && S[8]>=S[20] && S[8]>=S[26] ){
		cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
		if ( S[2]>=S[14] && S[2]>=S[20] && S[2]>=S[26]){
			if ( S[2]!=0 )
			cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
			if ( S[14]>=S[20] && S[14]>=S[26] ){
				if ( S[14]!=0 )
				cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
			}else if(S[20]>=S[14] && S[20]>=S[26] ){
				if ( S[20]!=0 )
				cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
			}else{
				if ( S[26]!=0 )
				cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
			}
		}else if ( S[14]>=S[2] && S[14]>=S[20] && S[14]>=S[26]){
			if ( S[14]!=0 )
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
			if ( S[2]>=S[20] && S[2]>=S[26] ){
				if ( S[2]!=0 )
				cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
			}else if(S[20]>=S[2] && S[20]>=S[26] ){
				if ( S[20]!=0 )
				cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
			}else{
				if ( S[26]!=0 )
				cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
			}
		}else if ( S[20]>=S[2] && S[20]>=S[14] && S[20]>=S[26]){
			if ( S[20]!=0 )
			cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
			if ( S[2]>=S[14] && S[2]>=S[26] ){
				if ( S[2]!=0 )
				cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
			}else if(S[14]>=S[2] && S[14]>=S[26] ){
				if ( S[14]!=0 )
				cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
			}else{
				if ( S[26]!=0 )
				cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
			}
		}else if ( S[26]>=S[2] && S[26]>=S[14] && S[26]>=S[20]){
			if ( S[26]!=0 )
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
			if ( S[2]>=S[14] && S[2]>=S[20] ){
				if ( S[2]!=0 )
				cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
			}else if(S[14]>=S[2] && S[14]>=S[20] ){
				if ( S[14]!=0 )
				cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
			}else{
				if ( S[20]!=0 )
				cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
			}
		}		
	}
	if ( S[14]>=S[2] && S[14]>=S[8] && S[14]>=S[20] && S[14]>=S[26] ){
		cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
		if ( S[2]>=S[8] && S[2]>=S[20] && S[2]>=S[26]){
			if ( S[2]!=0 )
			cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
		}else if ( S[8]>=S[2] && S[8]>=S[20] && S[8]>=S[26]){
			if ( S[8]!=0 )
			cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
		}else if ( S[20]>=S[2] && S[20]>=S[8] && S[20]>=S[26]){
			if ( S[20]!=0 )
			cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
		}else if ( S[26]>=S[2] && S[26]>=S[8] && S[26]>=S[20]){
			if ( S[26]!=0 )
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
		}
	}
	if ( S[20]>=S[2] && S[20]>=S[8] && S[20]>=S[14] && S[20]>=S[26] ){
		cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
		if ( S[2]>=S[8] && S[2]>=S[14] && S[2]>=S[26]){
			if ( S[2]!=0 )
			cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
		}else if ( S[8]>=S[2] && S[8]>=S[14] && S[8]>=S[26]){
			if ( S[8]!=0 )
			cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
		}else if ( S[14]>=S[2] && S[14]>=S[8] && S[14]>=S[26]){
			if ( S[14]!=0 )
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
		}else if ( S[26]>=S[2] && S[26]>=S[8] && S[26]>=S[14]){
			if ( S[26]!=0 )
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
		}
	}
	if ( S[26]>=S[2] && S[26]>=S[14] && S[26]>=S[20] && S[26]>=S[8] ){
		cout<<"  "<<x[24]<<"     "<<x[25]<<"      "<<S[26]<<"          "<<S[27]<<"              "<<x[28]<<"             "<<x[29]<<endl;
		if ( S[2]>=S[8] && S[2]>=S[14] && S[2]>=S[20]){
			if ( S[2]!=0 )
			cout<<"  "<<x[0]<<"     "<<x[1]<<"      "<<S[2]<<"          "<<S[3]<<"              "<<x[4]<<"             "<<x[5]<<endl;
		}else if ( S[8]>=S[2] && S[8]>=S[14] && S[8]>=S[20]){
			if ( S[8]!=0 )
			cout<<"  "<<x[6]<<"     "<<x[7]<<"      "<<S[8]<<"          "<<S[9]<<"              "<<x[10]<<"              "<<x[11]<<endl;
		}else if ( S[14]>=S[2] && S[14]>=S[8] && S[14]>=S[20]){
			if ( S[14]!=0 )
			cout<<"  "<<x[12]<<"     "<<x[13]<<"      "<<S[14]<<"          "<<S[15]<<"              "<<x[16]<<"             "<<x[17]<<endl;
		}else if ( S[20]>=S[2] && S[20]>=S[8] && S[20]>=S[14]){
			if ( S[20]!=0 )
			cout<<"  "<<x[18]<<"     "<<x[19]<<"      "<<S[20]<<"          "<<S[21]<<"              "<<x[22]<<"              "<<x[23]<<endl;
		}
	}


	SetConsoleTextAttribute(h,02);
	cout<<endl<<endl<<"Enter a number to exit: ";	
	SetConsoleTextAttribute(h,07);
	cin>>a;
	showAnimal();		
}

//*******************<RunApp>**********************************

int main()
{
	welcome();
	SetConsoleTextAttribute(h,07);
	print(); 
}
