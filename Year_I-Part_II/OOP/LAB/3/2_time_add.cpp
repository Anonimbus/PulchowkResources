//2.create a class time with data member hour, minute, second and day. use necessary member function & WAP to add two time and display the result in main.

#include <iostream>
#include <conio.h>

using namespace std;
 
class time{
    private:
        int sec,min,day,hour;
 
    public:
        void input(){
            cout<<"Enter the day, hour, min, sec : "<<endl;
            cin>>day>>hour>>min>>sec;
//            cout<<"Enter the hour : ";
//            cin>>hour;
//            cout<<"Enter the min : ";
//            cin>>min;
//            cout<<"Enter the sec : ";
//            cin>>sec;
        }
        time process(time c1,time c2){
            time c3;
            c3.sec = c1.sec + c2.sec;
            
            c3.min = (c1.min + c2.min)+c3.sec/60;
            c3.sec = (c3.sec)%60;
            
            c3.hour = (c1.hour + c2.hour)+c3.min/60;
            c3.min = (c3.min)%60;
            
            c3.day = (c1.day + c2.day) + c3.hour/24;
            c3.hour = (c3.hour)%24;
            
            return(c3);
        }
        void display(){
            cout<<endl<<endl<<"the day : "<<day<<endl;
            cout<<"the time : "<<hour<<" : "<<min<<" : "<<sec<<endl;
//            cout<<"the min : "<<min<<endl;
//            cout<<"the sec : "<<sec<<endl;
        }
};
 
int main(){
    time c4,c5,c6;
    c4.input();
    c5.input();
    c6 = c6.process(c4,c5);
    c6.display();
 
    getch();
    return 0;
} 