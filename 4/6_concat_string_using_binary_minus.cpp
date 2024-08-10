//binary operator overloading
 
#include <iostream>
#include <conio.h>
#include <string.h>
 
using namespace std;
 
class String{
	private:
		char str[80]; 
	public:
		void input(){
			cout<<"Enter the string : "<<endl;
			cin>>str;
		}
 
		String operator -(String str1){
			String s;
			strcpy(s.str, str);
			strcat(s.str,str1.str);
			return(s);
 
		}
		void display(){
			cout<<"the string is : "<<str;
		}
};
 
int main(){
 
	String s,s1,s2;
 
	s1.input();
	s2.input();
 
	s=s1-s2;
 
	s.display();
	getch();
	return 0;
}