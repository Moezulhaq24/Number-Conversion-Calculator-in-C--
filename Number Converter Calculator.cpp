#include<iostream>
#include<sstream>
#include<cstring>
#include<cmath>
#include<windows.h>
#include <unistd.h>
#include "NumberConverter.h"

using namespace std;

int main(){

string phrase ="Opening NUMBER CONVERSION CALCULATOR";
cout<<"\n\n\t\t\tLoading...";
string command = "espeak -v m2 \"" +phrase+"\"";
//cout<<"Opening the Decimal to Binary Calculator";
const char* charCommand=command.c_str();
system(charCommand);
system("cls");
int con;
  system("Color F0"); 
//  system("Color 7"); 
  cout<<"\n\n\n";
	cout<<"\t\t\t\t\t  ******************************\n";
	cout<<"\t\t\t\t\t  *NUMBER CONVERSION CALCULATOR*  \t\t\t\n";
	cout<<"\t\t\t\t\t  ******************************";
	
	cout<<"\n\n\n\n";
  
  cout<<"\t\t || PRESS 1 FOR DECIMAL NUMBER CONVERTER CALCULATOR     ||\n";
  cout<<"\t\t || PRESS 2 FOR BINARY NUMBER CONVERTER CALCULATOR      ||\n";
  cout<<"\t\t || PRESS 3 FOR OCTAL NUMBER CONVERTER CALCULATOR       ||\n";
  cout<<"\t\t || PRESS 4 FOR HEXADECIMAL NUMBER CONVERTER CALCULATOR ||\n";
  cout<<endl;
  cout<<" CHOOSE THE CALCULATOR : ";
  cin>>con;
  
  switch(con){
  	case 1 : { 
	  system("cls");
	  string phrase ="Opening DECIMAL NUMBER CONVERTER CALCULATOR";
	  cout<<"\n\n\t\t\tLoading...";
	string command = "espeak -v m3 \"" +phrase+"\"";
	const char* charCommand=command.c_str();
	system(charCommand);
	 system("cls");
	  int ch;
	system("Color 74");
	cout<<"\n\n";
	cout<<"\t\t\t\t\t  ________________________\n";
	cout<<"\t\t\t\t\t |DECIMAL NUMBER CONVERTER| \t\t\t";
	cout<<"\t\t\t\t\t                                         |________________________| ";
	
	cout<<"\n\n\n\n";
	cout<<"\t\t || Press 1 for DECIMAL TO BINARY      ||"<<endl;
	cout<<"\t\t || Press 2 for DECIMAL TO OCTAL       ||"<<endl;
	cout<<"\t\t || Press 3 for DECIMAL TO HEXADECIMAL ||"<<endl;
	cout<<endl;
	cout<<"In which conversion you want to go ? ";
	cin>>ch;
	cout<<endl;
	switch(ch){
	case 1 : decimal_to_binary();
	            cout<<endl;
	break;
	
	case 2 : decimal_to_octal();
	 			cout<<endl;
	break;
	
	case 3 : decimal_to_hexadecimal();
				cout<<endl;
	break;
	
	default : cout<<"Invalid Input.";	
		}
			break;
		  } 
	  
	case 2: {
		system("cls");
		string phrase ="Opening BINARY NUMBER CONVERTER CALCULATOR";
		cout<<"\n\n\t\t\tLoading...";
	string command = "espeak -v m3 \"" +phrase+"\"";
	const char* charCommand=command.c_str();
	system(charCommand);
	system("cls");
		int ch;
	system("Color B5");
	cout<<"\n\n";
	cout<<"\t\t\t\t\t  ________________________\n";
	cout<<"\t\t\t\t\t |BINARY NUMBER CONVERTER | \t\t\t";
	cout<<"\t\t\t\t\t                                         |________________________| ";
	
	cout<<"\n\n\n\n";
	cout<<"\t\t || Press 1 for BINARY TO DECIMAL     ||"<<endl;
	cout<<"\t\t || Press 2 for BINARY TO OCTAL       ||"<<endl;
	cout<<"\t\t || Press 3 for BINARY TO HEXADECIMAL ||"<<endl;
	cout<<endl;
	cout<<"In which conversion you want to go ? ";
	cin>>ch;
	cout<<endl;
	
	switch(ch){
	
	case 1 : binary_to_decimal();
	break;
	
	case 2 : binary_to_octal();
	break;
	
	case 3 : binary_to_hexadecimal();
	break;
	
	default: cout<<"Invalid Input.";
	
	}
			break;
		}  
		
	case 3: {
		system("cls");
		string phrase ="Opening OCTAL NUMBER CONVERTER CALCULATOR";
		cout<<"\n\n\t\t\tLoading...";
	string command = "espeak -v m4 \"" +phrase+"\"";
	const char* charCommand=command.c_str();
	system(charCommand);
	system("cls");
		int ch;
	system("Color 74");
	cout<<"\n\n";
	cout<<"\t\t\t\t\t  ________________________\n";
	cout<<"\t\t\t\t\t | OCTAL NUMBER CONVERTER | \t\t\t";
	cout<<"\t\t\t\t\t                                         |________________________| ";
	
	cout<<"\n\n\n\n";
	cout<<"\t\t || Press 1 for OCTAL TO DECIMAL     ||"<<endl;
	cout<<"\t\t || Press 2 for OCTAL TO BINARY      ||"<<endl;
	cout<<"\t\t || Press 3 for OCTAL TO HEXADECIMAL || "<<endl;
	cout<<endl;
	cout<<"In which conversion you want to go ? ";
	cin>>ch;
	cout<<endl;
	switch(ch){
	case 1 : octal_to_decimal();
	            cout<<endl;
	break;
	
	case 2 : octal_to_binary();
	 			cout<<endl;
	break;
	
	case 3 :octal_to_hexadecimal();
				cout<<endl;
	break;
	
	default : cout<<"Invalid Input.";	
		}
			break;
		}
		
	case 4: {
		system("cls");
		string phrase ="Opening HEXADECIMAL NUMBER CONVERTER CALCULATOR";
		cout<<"\n\n\t\t\tLoading...";
	string command = "espeak -v m1 \"" +phrase+"\"";
	const char* charCommand=command.c_str();
	system(charCommand);
	system("cls");
		int ch;
	system("Color 8B");
	cout<<"\n\n";
	cout<<"\t\t\t\t\t  ____________________________\n";
	cout<<"\t\t\t\t\t |HEXADECIMAL NUMBER CONVERTER| \t\t\t";
	cout<<"\t\t\t\t\t                                 |____________________________| ";
	
	cout<<"\n\n\n\n";
	cout<<"\t\t || Press 1 for HEXADECIMAL TO DECIMAL || "<<endl;
	cout<<"\t\t || Press 2 for HEXADECIMAL TO BINARY  ||"<<endl;
	cout<<"\t\t || Press 3 for HEXADECIMAL TO OCTAL   ||"<<endl;
	cout<<endl;
	cout<<"In which conversion you want to go ? ";
	cin>>ch;
	cout<<endl;
	switch(ch){
	case 1 : hexadecimal_to_decimal();
	            cout<<endl;
	break;
	
	case 2 : hexadecimal_to_binary();
	 			cout<<endl;
	break;
	
	case 3 : hexadecimal_to_octal();
				cout<<endl;
	break;
	
	default : cout<<"Invalid Input.";	
		}
	
			break;
		}		
		  }
	  
	  
	}
