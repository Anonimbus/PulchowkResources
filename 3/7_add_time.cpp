//class time with dt memb hr, min, sec . initialize all the data memb. using const. & use necess memb fn to wap to add two time and display result in main.

#include <iostream>
#include <conio.h>
using namespace std;

class time{
	private:
		int hour, min, sec;
	public:
		time(){
			hour = 10;
			min = 50;
			sec = 55;
		}
		
		void process(time &tm, time &tn){
			hour = tm.hour + tn.hour;
			
			min = tm.min + tn.min;
			hour += min/60;
			min %= 60;
			
			sec = tm.sec + tn.sec;
			min += sec/60;
			sec %= 60;
		}
		
		void display(){
			cout<<"The addition of time is "<<hour<<" : "<<min<<" : "<<sec<<endl;
		}
};


int main(){
	time t1, t2, t3;
	
	t1.process(t2,t3);
	t1.display();
	getch();
	return 0;
}