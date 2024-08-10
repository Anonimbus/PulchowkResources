//1_basic_data_cm_to_class_data_meter

#include <iostream>
#include <conio.h>
using namespace std;

class meter{
	private:
		float m;
	public:
		meter(){
			m = 0;
		}
		meter(int x){
			m = x/100.0;
		}
		void display(){
			cout<<"the value of meter is : "<<m;
		}
};

int main(){
	int cm=90;
	meter m1;
	
	m1 = cm;
	
	m1.display();
	
	getch();
	return 0;
}