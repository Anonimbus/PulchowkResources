//5.destructor
 
#include <iostream>
#include <conio.h>
using namespace std;
 
class calc{
    private:
        // int real,img;
         int x,y;
 
    public:
        calc(){
            x=100;
            y=200;
        }
 
        calc(int a, int b){
            x=a;
            y=b;
        }
 
        void display(){
            cout<<"the x is : "<<x<<endl;
            cout<<"the y is : "<<y<<endl;
        }
 
        ~calc(){
            cout<<"this is destructor of : "<<x<<" and "<<y<<endl;
            getch();
        }
 
};
 
int main(){
    calc c,c2(2,3);
    c.display();
    c2.display();
 
    getch();
    return 0;
}