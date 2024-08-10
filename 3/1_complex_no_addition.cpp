//1.Create a class complex with data member real and imaginary. Use necessary member function & WAP to add two complex no & display result.

#include <iostream>
#include <conio.h>
using namespace std;
 
class complex{
    private:
        int real,img;
 
    public:
        void input(){
            cout<<"Enter real part of the complex number : ";
            cin>>real;
            cout<<"Enter the imaginary part of complex no : ";
            cin>>img;
        }
        complex process(complex c1,complex c2){
            complex c3;		//define calculation object in the process
            c3.real = c1.real + c2.real;
            c3.img = c1.img + c2.img;
            return(c3);
        }
        void display(){
            cout<<"the addition of complex no is : "<<real<<" + "<<img<<"i"<<endl;
//            cout<<"the imaginary part : "<<img<<endl;
        }
};
 
int main(){
    complex c4,c5,c6;
    c4.input();
    c5.input();
    c6 = c6.process(c4,c5);			//made mistake here
    c6.display();
 
    getch();
    return 0;
}