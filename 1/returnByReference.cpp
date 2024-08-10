#include <iostream>
#include <conio.h>
using namespace std;

int &max(int &a, int &b){
	if (a>b)
		return(a);
	else
		return(b);
}

int main(){
	int a1=6, b1=83;
	max(a1,b1)=-1;	//here -1 is the reference value which helps hide(encapsulate) the max value
	cout<<"a = "<<a1<<endl<<"b = "<<b1<<endl;
	
	getch();
	return 0;
}