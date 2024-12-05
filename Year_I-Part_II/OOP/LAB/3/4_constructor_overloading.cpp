// 4.illus ex of diff types of const in p. constructor ocverloading
 
#include <iostream>
#include <conio.h>
using namespace std;
 
class calc{
    private:
         int x,y,z;
 
    public:
        calc(){				//The constructor shares the class name
            x=100;
            y=200;
            z=300;
        }
 
        calc(int a, int b, int c){		//parameterized constructor
            x=a;
            y=b;
            z=c;
        }
 
        calc(calc &c8){				//copy constructor
            x=c8.x;
            y=c8.y;
            z=c8.z;
        }
 
        void display(){
            cout<<"the x is : "<<x<<endl;
            cout<<"the y is : "<<y<<endl;
            cout<<"the z is : "<<z<<endl;
        }
 
};
 
int main(){
    calc c,c2(2,3,4),c5(c2);
    c.display();
    c2.display();
    c5.display();
    getch();
    return 0;
}