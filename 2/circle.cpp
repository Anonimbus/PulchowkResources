//3.WAP to calc area & perimeter of circle in a func & disp the result in main.

#include <iostream>
#include <conio.h>
using namespace std;

const float PI = 3.1416;

void circle(float r, float &A, float &P){
	A = PI*r*r;
	P = 2*PI*r;
}

int main(){
	float r1 = 5.5, A1, P1;
	circle(r1,A1,P1);
	cout<<"The area of circle is : "<<A1<<endl;
	cout<<"The perimeter of circle is : "<<P1<<endl;
	
	getch();
	return 0;
}