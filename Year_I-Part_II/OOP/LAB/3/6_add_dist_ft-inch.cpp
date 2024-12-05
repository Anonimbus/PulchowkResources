//12 inch = 1 ft
 
#include <iostream>
#include <conio.h>
using namespace std;
 
class Distance{
    private:
        // int real,img;
         int feet, inch;
 
    public:
        Distance(){
            feet=100;
            inch=200;
        }
 
        void process(Distance &cx, Distance &cy){
//            distance cz = cx+cy;
            feet = cx.feet + cy.feet;
            inch = cx.inch + cy.inch;
            feet += inch /12;
            inch %= 12;
        }
 
        void display(){
            cout<<"the feet is : "<<feet<<endl;
            cout<<"the inch is : "<<inch<<endl;
        }
 
};
 
int main(){
    Distance d,d1,d2;
    d.process(d1,d2);
    d.display();
 
    getch();
    return 0;
}