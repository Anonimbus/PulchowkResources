//1.WAP to calculate area of circle, rectangle and triangle using concept of function overloading [DONE]
//2.WAP to calculate volume of cube, cylinder and cuboid using concept of function overloading [DONE]
//3.WAP to calculate area and perimeter of a circle in a function and display the result in main [DONE]
//4.WAP to calculate the tsa, csa, and volume of a cylinder in a func & display the result in main [DONE]
//5.WAP to convert feet to meter using the concept of class & object [DONE]
//6.WAP to calculate SI using concept of class and object [DONE]
//7.WAP to calculate distance between two point using the concept of class and object [DONE]
//8.WAP to calculate SI by using inline function and by using default value of rate = 15%	[]


//WAP to calc area of circle, rect & triangle using concept of function overloading.
//function overloading ---> Same function name to perform variety of task w.r.t. params and data type

#include <iostream>
#include <conio.h>
using namespace std;

const float PI = 3.1416;

float area(float r){
	return PI*r*r;	
}

float area(float a, float b){
	return a*b;
}

float area(float a, float b, float c){
	float s=(a+b+c)/2;	
	return s;
}

int main(){
	float r1=5.5;
	cout<<"The area of circle is : "<<area(r1)<<endl;
	float x1=4,y1=5,z1=6;
	cout<<"The area of triangle is : "<<area(x1,y1,z1)<<endl;
	float l1=5, b1=6;
	cout<<"The area of rectangle is : "<<area(l1,b1)<<endl;
	
	getch();
	return 0;
	
}