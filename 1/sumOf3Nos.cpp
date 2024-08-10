#include <iostream>
#include <conio.h>
using namespace std;

int sum(int a, int b, int c){
	return a+b+c;
}

int main(){
	int a1,b1,c1,s1;
	
	cout<<"Enter numbers a,b and c : "<<endl;
	cin>>a1>>b1>>c1;
	
	cout<<"The sum of the three numbers is : "<<sum(a1,b1,c1)<<endl;
	
	getch();
	return 0;
}