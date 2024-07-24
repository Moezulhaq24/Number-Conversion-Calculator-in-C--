#include<iostream>
#include<sstream>
#include<cstring>
#include<cmath>
using namespace std;
void decimal_to_binary(){
	int decimal,rem,binary=0,product=1;
	cout<<"Enter a Decimal Number (0-9) : ";
	cin>>decimal;
	while(decimal!=0){
 		rem = decimal%2;
 		binary=binary+(rem*product);
 		decimal=decimal/2;
 		product=product*10;
	}
	cout<<"Binary Number = "<<binary;
}	

void decimal_to_octal(){
	int decimal,rem,octal=0,product=1;
	cout<<"Enter a Decimal Number (0-9) : ";
	cin>>decimal;
	while(decimal!=0){
 		rem = decimal%8;
 		octal=octal+(rem*product);
 		decimal=decimal/8;
 		product=product*10;
	}
	cout<<"Octal Number = "<<octal;
}
void decimal_to_hexadecimal(){
    int decimalNum, i=0,rem;
    char hexaDecimalNum[50];
    cout<<"Enter the Decimal Number (0-9) : ";
    cin>>decimalNum;
    while(decimalNum!=0)
    {
        rem = decimalNum%16;
        if(rem>=10)
            rem = rem+55;
        else
            rem = rem+48;
        hexaDecimalNum[i] = rem;
        i++;
        decimalNum = decimalNum/16;
    }
    cout<<"\nHexadecimal Value: ";
    for(i=i-1; i>=0; i--)
        cout<<hexaDecimalNum[i];
    cout<<endl;
}
void binary_to_decimal(){
	long long binary;
	int  rem, count,decimal,n=0,sum=0;
    cout << "Enter Binary number : " ;
    cin >> binary;
    while (binary != 0) {
      rem = binary % 10;  
      binary = (binary / 10);
	  decimal = rem*(pow(2,n));
      ++n;
      sum=sum+decimal;
    }
   cout<<"Decimal Number : "<<sum;
}

void binary_to_octal(){
	long long binary;
	int  rem, count,decimal=0,n=0,sum;
     int rem1,octal=0,product=1;
    cout << "Enter Binary number : " ;
    cin >> binary;
    while (binary != 0) {
      rem = binary % 10;  
      binary = (binary / 10);
	  sum = rem*(pow(2,n));
      ++n;
      decimal=decimal+sum;
  }
      while(decimal!=0){
      rem1=decimal%8;
      octal= octal+(rem1*product);
      decimal=decimal/8;
      product=product*10;
}
   cout<<"Octal Number : "<<octal;
}

void binary_to_hexadecimal(){
	long long binary;
	int  rem,decimal=0,n=0,sum,i=0,rem1;
	char hexadecimalnum[50];
    cout << "Enter Binary number : " ;
    cin >> binary;
    while (binary != 0) {
      rem = binary % 10;  
      binary = (binary / 10);
	  sum = rem*(pow(2,n));
      ++n;
      decimal=decimal+sum;
    }
    while(decimal!=0){
    	rem1=decimal%16;
    	if(rem1>=10){
    		rem1=rem1+55;
		}
		else{
			rem1=rem1+48;
		}
		hexadecimalnum[i]=rem1;
		i++;
		decimal=decimal/16;
	}
	cout<<"Hexadecimal Number = ";
	for(i=i-1;i>=0;i--){
		cout<<hexadecimalnum[i];
	}
}
void octal_to_decimal(){

int octal ,decimal=0,rem,n=0,sum;

cout<<"Enter the Octal Number : ";
cin>>octal;

while(octal!=0){
	rem=octal%10;
    sum = rem *(pow(8,n));
	n++;
	octal=octal/10; 
	decimal+=sum;
}

cout<<"Decimal Number = "<<decimal;
	
}

void octal_to_binary(){
	
	int octal ,decimal=0,rem,n=0,sum,rem1;
    int binary=0,product=1;
cout<<"Enter the Octal Number : ";
cin>>octal;

while(octal!=0){
	rem=octal%10;
    sum = rem*(pow(8,n));
	n++;
	octal=octal/10; 
	decimal+=sum;
}
while(decimal!=0){
	rem1=decimal%2;
	binary=binary+(rem1*product);
	decimal=decimal/2;
	product=product*10;
}

cout<<"Binary Number = "<<binary;
}

void octal_to_hexadecimal(){
		int octal ,decimal=0,rem,n=0,sum,rem1,i=0;
	char hexadecimalnum[50];
cout<<"Enter the Octal Number : ";
cin>>octal;

while(octal!=0){
	rem=octal%10;
    sum = rem*(pow(8,n));
	n++;
	octal=octal/10; 
	decimal+=sum;
}
while(decimal!=0){
	rem1=decimal%16;
	if(rem1>=10){
		rem1=rem1+55;
	}
	else{
		rem1=rem1+48;
	}
	hexadecimalnum[i]=rem1;
	i++;
	decimal=decimal/16;
}
cout<<"HexaDecimal Number = ";
for(i=i-1;i>=0;i--){
	cout<<hexadecimalnum[i];
}
}
void hexadecimal_to_decimal(){

char hexadecimal[50];
   int decimal=0,n=0,i,len;
   cout<<"Enter HexaDecimal Number : ";
   cin>>hexadecimal;
   len=strlen(hexadecimal);
   for(i=len-1; i>=0;i--){
   	
   	 if(hexadecimal[i]>='0' && hexadecimal[i]<='9'){
   	 	decimal=decimal + (hexadecimal[i]-48) * pow(16,n);
   	 	n++;
		}
	else if(hexadecimal[i]>='A' && hexadecimal[i]<='F'){
		decimal=decimal + (hexadecimal[i]-55) * pow(16,n);
		n++;
	}	
   }
   cout<<"Decimal Number = "<<decimal;
}

void hexadecimal_to_binary(){
	char hexadecimal[50];
   int decimal=0,n=0,i,len;
   int rem,binary=0,product=1;
   cout<<"Enter HexaDecimal Number : ";
   cin>>hexadecimal;
   len=strlen(hexadecimal);
   for(i=len-1; i>=0;i--){
   	
   	 if(hexadecimal[i]>='0' && hexadecimal[i]<='9'){
   	 	decimal=decimal + (hexadecimal[i]-48) * pow(16,n);
   	 	n++;
		}
	else if(hexadecimal[i]>='A' && hexadecimal[i]<='F'){
		decimal=decimal + (hexadecimal[i]-55) * pow(16,n);
		n++;
	}	
   }
   while(decimal!=0){
   	 rem= decimal%2;
   	 binary = binary + (rem*product);
   	 decimal=decimal/2;
   	 product=product*10;
   }
   cout<<"Binary Number = "<<binary;
}

void hexadecimal_to_octal(){
	char hexadecimal[50];
   int decimal=0,n=0,i,len;
   int rem,octal=0,product=1;
   cout<<"Enter HexaDecimal Number : ";
   cin>>hexadecimal;
   len=strlen(hexadecimal);
   for(i=len-1; i>=0;i--){
   	
   	 if(hexadecimal[i]>='0' && hexadecimal[i]<='9'){
   	 	decimal=decimal + (hexadecimal[i]-48) * pow(16,n);
   	 	n++;
		}
	else if(hexadecimal[i]>='A' && hexadecimal[i]<='F'){
		decimal=decimal + (hexadecimal[i]-55) * pow(16,n);
		n++;
	}	
   }
  
  while(decimal!=0){
  	rem = decimal % 8;
  	octal = octal + (rem* product);
  	decimal=decimal/8;
  	product=product*10;
  }
   
   cout<<"Octal Number = "<<octal;
}

