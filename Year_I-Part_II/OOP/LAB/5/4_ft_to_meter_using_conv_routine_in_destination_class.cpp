//ft to meter using conversion routine in destination class : constructor function

#include <iostream>
#include <conio.h>
using namespace std;

class destination;

class source{

	private:
		float ft;
	public:
		
		source(){
			ft = 0;
		}	
		
		void input(){
			cout<<"enter the value of feet : ";
			cin>>ft;
		}
		
		float retn_func(){
			return(ft);
		}
	
};

class destination{
	private:
		float m;
		
	public:
		destination(){
			m = 0;
		}
				
		destination(source s1){
			m = s1.retn_func()/3.28;
		}
			
		void display(){
			cout<<"the equivalent value of meter is = "<<m;
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