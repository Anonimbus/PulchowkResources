//WAP to calc area & perimeter of rectangle in a func & disp the result in main.

#include <iostream>
#include <conio.h>
using namespace std;

void rect(float l, float b, float &A, float &P){
	A = l*b;
	P = 2*(l+b);
}

int main(){
	float l1 = 5, b1 = 4, a1, p1;
	rect(l1,b1,a1,p1);
	cout<<"The area of rectangle is : "<<a1<<endl;
	cout<<"The perimeter of rectangle is : "<<p1<<endl;
	
	getch();
	return 0;
}