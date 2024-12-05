#include <iostream>
#include <conio.h>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a1,b1;
	cout<<"Enter a and b : ";
	cin>>a1>>b1;
	cout<<"a : "<<a1<<" b : "<<b1<<endl;
	//now let us swap
	swap(a1,b1);
	cout<<"a : "<<a1<<" b : "<<b1<<endl;
}