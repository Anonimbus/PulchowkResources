//reference variable/alias

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int a = 5;
	cout<<"the value of a is "<<a<<endl;
	int &x = a;
	
	x += 5;
	cout<<"the value of a is "<<a<<endl;
	a += 10;
	cout<<"the value of x is "<<x<<endl;
	
	getch();
	return 0;
}