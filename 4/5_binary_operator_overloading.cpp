//binary operator overloading
 
#include <iostream>
#include <conio.h>
using namespace std;
 
class Distance{
	private:
		int ft, inch ;
	public:
		void input(){
			cout<<"Enter feet : ";
			cin>>ft;
			cout<<"Enter inch : ";
			cin>>inch;
		}
 
		Distance operator -(Distance d1){
			Distance d;
			d.inch = inch + d1.inch;
			d.ft = ft+ d1.ft + d.inch/12;
			d.inch %= 12;
			return (d);
		}
		void display(){
			cout<<"feet = "<<ft<<endl<<"inch = "<<inch<<endl;
		}
};
 
int main(){
	Distance d1,d2,d3;
	d1.input();
	d2.input();
	d3 = d1-d2;
 
	d3.display();
 
	getch();
	return 0;
}
 
 