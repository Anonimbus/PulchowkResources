#include <iostream>
#include <conio.h>
using namespace std;
 
class two;
 
class one{
	private:
		int a;
	public:
		void input(){
			cout<<"enter a : ";
			cin>>a;
		}
		void display(){
			cout<<"a = "<<a<<endl;
		}
	friend void swap(one &t3, two &t4);
};
 
 
 
class two{
	private:
		int b;
	public:
		void input(){
			cout<<"enter b : ";
			cin>>b;
		}
		void display(){
			cout<<"b = "<<b<<endl;
		}
	friend void swap(one &t3, two &t4);
};
 
 
 
void swap(one &t1,two &t2){
	int temp = t1.a;
	t1.a = t2.b;
	t2.b = temp;
}
 
int main(){
	one t1;
	two t2;
	t1.input();
	t2.input();
 
	cout<<"before : "<<endl;
 
	t1.display();
	t2.display();
 
	swap(t1, t2);
	cout<<"bruuuuuuuuh, done!!"<<endl;
 
	t1.display();
	t2.display();
 
	getch();
	return 0;
}
 
 
 
 