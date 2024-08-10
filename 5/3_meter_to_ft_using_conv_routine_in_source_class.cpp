//meter to ft using conversion routine in source class : operator function

#include <iostream>
#include <conio.h>
using namespace std;

class source;

class destination{
	private:
		float ft;
	public:
		
		destination(){
			ft = 0;
		}
		
		destination(float x){
			ft = x;
		}	
			
		void display(){
			cout<<"the equivalent value of ft is = "<<ft;
		}
};


class source{
	private:
		float m;
		
	public:
		source(){
			m = 0;
		}
		
		void input(){
			cout<<"enter the value of meter : ";
			cin>>m;
		}
		
		operator destination(){
			float ft = 3.28*m;
			return (destination(ft));
		}
	
};

int main(){
	source s;
	destination d;
	s.input();
	
	d = s;
	
	d.display();
	
	getch();
	return 0;
}