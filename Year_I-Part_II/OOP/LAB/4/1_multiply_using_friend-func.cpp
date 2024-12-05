#include <iostream>
#include <conio.h>
using namespace std;
 
class test{
	private:
		int a;
	public:
		void input(){
			cout<<"enter a : ";
			cin>>a;
		}
	friend int multi(test t3, test t4);
};
 
int multi(test t1,test t2){
	return (t1.a*t2.a);
}
 
int main(){
	test t1,t2;
	t1.input();
	t2.input();
	cout<<"bruuuuuuuuh, the multiple is : "<<multi(t1,t2);
}