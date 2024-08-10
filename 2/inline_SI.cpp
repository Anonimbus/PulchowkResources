//8.WAP to calculate SI by using inline function and by using default value of rate = 15%	[]
#include <iostream>
#include <conio.h>
using namespace std;

const float PI = 3.1416;

inline void calc(float p, float t, float r=15){
	float si = p*t*r/100;
	cout<<"The interest amount is : "<<si<<endl;
}

int main(){
	float p,t,r;
	cout<<"PROGRAM TO CALCULATE SIMPLE INTEREST!!!"<<endl<<endl;
	cout<<"Enter the principal amount : ";
	cin>>p;
	cout<<"Enter the time (years) : ";
	cin>>t;
	cout<<"Enter the rate (%) : ";
	cin>>r;
	
	calc(p,t);	//if i send r also then it will overwrite the value of r in formal args.
	
	getch();	
	return 0;
}