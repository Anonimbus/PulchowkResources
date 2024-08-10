//5.WAP to convert feet to meter using the concept of class & object []
//1 feet = 0.3048 m

#include <iostream>
#include <conio.h>
using namespace std;

class converter{
	private:
		float ft,m;
	public:
		void input(){
			cout<<"enter the length in feet : ";
			cin>>ft;
		}
		void process(){
			m = ft * 0.3048;
		}
		void output(){
			cout<<"the length in meters is : "<<m<<endl;
		}
};

int main(){
	converter c1;
	c1.input();
	c1.process();
	c1.output();
	
	getch();
	return 0;
}