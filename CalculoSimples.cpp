#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	int C1,N1;
	int C2,N2;
	
	double V1,V2, VALOR;
	
	cin>> C1>>N1>>V1;
	cin>>C2>>N2>>V2;
	
	VALOR= N1*V1 + N2*V2;
	
	cout<<fixed<<setprecision(2);
	cout<<"VALOR A PAGAR: R$ "<<VALOR<< endl;
}
