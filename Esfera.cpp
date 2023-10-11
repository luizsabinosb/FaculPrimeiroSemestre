#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	double PI, VOLUME,R;
	
	cin>> R;
	
	PI=3.14159;
	
	VOLUME=(4/3.0)*PI*(R*R*R);
	
	cout<<fixed<<setprecision(3);
	cout<<"VOLUME = "<<VOLUME<<endl;
}
