#include <iostream>
#include <conio.h>
using namespace std;
 
class two;
class one {
	private:
		int a;
	public:
		void input(){
			cout<<"a = ";
			cin>>a;
		}
	friend class two ;
};
 
class two {
	private:
		int b,s=0;
	public:
		void input(){
			cout<<"b = ";
			cin>>b;
		}
		void process(one &o){
			s = b+o.a;
		}
		void display(){
			cout<<"the value of sum is : "<<s;
		}
};
 
 
int main(){
	one o1;
	two t1;
 
	o1.input();
	t1.input();
 
	t1.process(o1);
 
	t1.display();
 
}
 