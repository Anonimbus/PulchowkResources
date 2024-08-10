//4.WAP to calculate the tsa, csa, and volume of a cylinder in a func & display the result in main []
#include <iostream>
#include <conio.h>
using namespace std;

const float PI = 3.1416;

void calc(float r,float h,float &t,float &c,float &v){
	c = 2*PI*r*h;
	t = 2*PI*r*(r+h);
	v = PI*r*r*h;
}

int main(){
	float t,c,v,r,h;
	cout<<"Enter the radius of the cylinder : ";
	cin>>r;
	cout<<"Enter the height of the cylinder : ";
	cin>>h;
	
	calc(r,h,t,c,v);
	
	cout<<endl<<"The T.S.A. of the cylinder is : "<<t<<endl;
	cout<<"The C.S.A. of the cylinder is : "<<c<<endl;
	cout<<"The Volume of the cylinder is : "<<v<<endl;
	
	getch();
	return 0;
}