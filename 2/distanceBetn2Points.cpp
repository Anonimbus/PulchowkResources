
//7.WAP to calculate distance between two point using the concept of class and object [DONE]

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class Distance {
	private:
		float x1,y1,x2,y2, dist;
	
	public:
		void input () {
			cout<<"Enter the x1,y1 and x2,y2: "<<endl;
			cin>>x1>>y1>>x2>>y2;
		}
		void process () {
			dist = sqrt (pow (x2-x1,2) +pow (y2-y1, 2));
		}
		void output () {
			cout<<"The distance in meter is :"<<dist<<endl;
		}
};
int main() {
	Distance d;
	d.input();
	d.process();
	d.output ();
}