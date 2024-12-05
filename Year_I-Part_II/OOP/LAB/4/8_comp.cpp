// compare data of two obj of same class by overloading <= operator 

#include <iostream>
#include <conio.h>
using namespace std;


class data{
	private:
		int x;
	public:
		data(){
			x = 500;
		}
		data(int zz){
			x = zz;
		}
		
		data operator <= (data dn){
			if (x<=dn.x){
				cout<<"the value of 1st is smaller than or equals to 2nd"<<endl;
			}
			else{
				cout<<"the value of 2nd is smaller"<<endl;
			}
			return 0;
		}
};

int main(){
	data d1,d2(200),d3;
	
	d3 = (d1<=d2);
	
	getch();
	return 0;
}