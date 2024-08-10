//conv deg to farhenheit

#include <iostream>
#include <conio.h>
using namespace std;

float conv(float deg){
	return (1.8*deg+32);
}

int main(void){
	int deg, far;
	
	cout<<"enter the temp in degree celsius : ";
	cin>>deg;
	
	cout<<"the temp in farhenheit is : "<<conv(deg);
	getch();
	return 0;
}