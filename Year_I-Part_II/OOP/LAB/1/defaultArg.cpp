#include <iostream>
#include <conio.h>
using namespace std;

float si(int p, int t, float r = 4.5){

	return (p*t*r/100);
	
}

int main(){
	float p,t,i;

	cout<<"enter the value of p : "<<endl;
	cin>>p;
	cout<<"enter the value of t : "<<endl;
	cin>>t;
	
	i=si(p,t);
	
	cout<<"the simple interest is : "<<i<<endl;
	
	getch();
	return 0;
	
}