#include <iostream>
#include <conio.h>
using namespace std;

class Interest {
	private:
		float p,t,r,si;
	
	public:
		void input () {
			cout<<"Enter the value of p, t and r : "<<endl;
			cin>>p>>t>>r;
		}
		void process () {
			si = p*t*r/100;
		}
		void output () {
			cout<<"The Simple Interest after "<<t<< " years is : "<<si<<endl;
		}
};
int main() {
	Interest I;
	I.input();
	I.process();
	I.output ();
}