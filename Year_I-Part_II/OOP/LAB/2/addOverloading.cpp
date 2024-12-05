//function overloading ---> Same function name to perform variety of task w.r.t. params and data type

#include <iostream>
#include <conio.h>
using namespace std;

int add(int a, int b){
	return a+b;	
}

float add(float a, float b){
	return a+b;
}

int add(int a, int b, int c){
	return a+b+c;
}

int main(){
	int a1=4,b1=5;
	cout<<"The sum of two int is : "<<add(a1,b1)<<endl;
	float c1=4.65,d1=9.343;
	cout<<"The sum of two float is : "<<add(c1,d1)<<endl;
	int x1=4,y1=4,z1=54;
	cout<<"The sum of three int is : "<<add(x1,y1,z1)<<endl;
	
	getch();
	return 0;
	
}