#include<iostream>
#include<fstream>
using namespace std ; 


void Writing(char filename[30] )
{
	char firstname[30] , lastname[30] ; int Age ; 
	cout << "Please Enter Your FirstName " << endl ; cin >> firstname ; 
	cout << "Please Enter Your LastName  " << endl ; cin >> lastname  ;
	cout << "Please Enter Your Age       " << endl ; cin >> Age ; 
	fstream Object ; 
	Object.open(filename , ios::app ) ; 
	Object << firstname << " - " << lastname << " - " << Age << endl ; 
	Object.close() ;  
}

void Reading(char filename[30] )
{
	string MyText ; 
	ifstream MyDataBase ; 
	MyDataBase.open(filename , ios :: in ) ; 
	
	while(getline(MyDataBase , MyText))
	{
		cout << MyText << endl ; 
	}
	
}

int main()
{
	int response ; 
	char filename[30] ; 
	cout << "Please Enter Name of a File Name " << endl ; 
	cin >> filename ; 
	do 
	{
		cout << "Please Select : [1-Writing ] , [2-Reading] , [3-Quit] " << endl ; 
		cin >> response ; 
		if (response == 1 ) Writing(filename) ; 
		else if (response == 2 ) Reading(filename) ; 
		else if (response == 3 ) break ; 
	}while(response != 3 ) ; 
	
	cout << "All Work Done . " << endl ; 
	return 0 ; 

	
}




