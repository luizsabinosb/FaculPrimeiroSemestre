#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	double H,KH,LN;
	
	cin>>H>>KH;
	
	LN=H*KH/12;
	
	cout<<fixed<<setprecision(3);
	cout<<LN<<endl;
}

