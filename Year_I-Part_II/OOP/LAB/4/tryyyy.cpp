//5.binary operator overloading step-wise
 
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
 
		Distance operator -(Distance d2){			
			cout<<"The objects ft and inch is "<<ft<<" and "<<inch<<endl;
			cout<<"The args ft and inch is "<<d2.ft<<" and "<<d2.inch<<endl;
			cout<<"creating obj d to return the sum...."<<endl;
			
			Distance d;
			d.inch = inch + d2.inch;
			d.ft = ft + d2.ft + d.inch/12;
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
