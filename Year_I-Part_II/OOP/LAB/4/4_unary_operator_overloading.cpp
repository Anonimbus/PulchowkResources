//unary operator overloading
 
#include <iostream>
#include <conio.h>
using namespace std;
 
class test{
	private:
		int count ;
	public:
		void input(){
			cout<<"Enter the value of count : ";
			cin>>count;
		}
		void operator ++(){
			count = count +1;
		}
		void operator ++(int){			//works for the t++;
			count = count +1;
		}
		void display(){
			cout<<"the value of count is "<<count<<endl;
		}
};
 
int main(){
	test t;
	t.input();
	t++;
	t.display();
	++t;
	t.display();
 
	getch();
	return 0;
}
 
 
 