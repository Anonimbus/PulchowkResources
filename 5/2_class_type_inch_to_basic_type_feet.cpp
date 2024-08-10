//2_class_type_inch_to_basic_type_feet. [12 inch = 1 feet]
#include <iostream>
#include <conio.h>
using namespace std;

class inch{
	private:
		float i;
	public:
		inch(){
			i = 0;
		}
		void input(){
			cout<<"enter the value of inch : ";
			cin>>i;	
		}
		operator float(){
			return i/12.0;
		}
};

int main(){
	float ft=0;
	inch i1;
	
	i1.input();
	
	ft = i1; 
	cout<<"the value of feet is = "<<ft<<endl;
	getch();
	return 0;
}