//static data memb and static memb function
//static func only handles static datas! cannot handle other data
 
#include <iostream>
#include <conio.h>
using namespace std;
 
class calc{
    private:
        // int real,img;
        static int x;			//remains static across all different objects.
 
    public:
        void input(){
            cout<<"Enter a no : ";
            cin>>x;
        }
        void display(){
            cout<<"the no is : "<<x<<endl;
        }
        static void disp(){			//can only use the static variables
            cout<<"brooo : "<<x<<endl;
        }
 
};

// Initialize the static variable x
int calc::x=0;            //this is the step!!!!!!
 
int main(){
    calc c,c1,c56;
    c1.input();
    c.display();
    c1.display();
    c56.display();
    calc::disp();			//we have to do class_name::static_func(); in order to call the static member func.
    getch();
    return 0;
}