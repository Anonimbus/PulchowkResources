//calculate si using inline function in default rate 12.5

#include <iostream>
#include <conio.h>
using namespace std;

inline float si(int p, int t, float r = 12.5){
	return (p*t*r/100);
}

int main(){
	int p, t;
	
	cout<<"P : ";
	cin>>p;
	cout<<"T : ";
	cin>>t;
	
	cout<<"the simple interest is : "<<si(p,t)<<endl;
	
	getch();
	return 0;
}