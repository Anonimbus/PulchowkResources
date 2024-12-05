//compare two amount by relational operator overloading

#include <iostream>
#include <conio.h>
using namespace std;

class compare{
	private:
		int x;
	public:
		void input(){
			cout<<"enter the number : ";
			cin>>x;
		}
		
		compare operator > (compare y){
			compare z;
			z.x = x;
			if(y.x > z.x)
				return (y);
			else
				return 	(z);
		}
		
		void display(){
			cout<<"the greater value is :"<<x;
		}
		
};


int main(){
	compare a,b,c;	
	a.input();
	b.input();
	
	c = a>b;
	c.display();
}