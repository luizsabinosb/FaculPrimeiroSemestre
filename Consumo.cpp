#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int X;
	double Y,C;
	
	cin>>X>>Y;
	
	C=X/Y;
	
	cout<<fixed<<setprecision(3);
	cout<<C<<" km/l"<<endl;
}
