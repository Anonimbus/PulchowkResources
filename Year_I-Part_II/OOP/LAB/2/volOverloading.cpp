//2.WAP to calc volume of cube, cuboid, cylinder using func overloading.

#include <iostream>
#include <conio.h>
using namespace std;

const float PI = 3.1416;

float vol(int l){
	return l*l*l;
}

float vol(int l, int b, int h){
	return l*b*h;
}

float vol(int r, int h){
	return PI*r*r*h;
}

int main(){
	int l1, b1, h1, r1;
	l1 = 5;
	cout<<"the volume of cube is : "<<vol(l1)<<endl;
	l1 = 5, b1 = 6, h1 = 8;
	cout<<"the volume of cuboid is : "<<vol(l1, b1, h1)<<endl;
	h1 = 8, r1 = 5.5;
	cout<<"the volume of cylinder is : "<<vol(r1,h1)<<endl;
}