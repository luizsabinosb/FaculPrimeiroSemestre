#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	double A,B,C,TRI,CIR,TRA,QUA,RET,PI;
	
	cin>>A>>B>>C;
	
	PI=3.14159;
	
	TRI= (A*C)/2;
	CIR= PI * (C*C);
	TRA= (A+B)*C/2;
	QUA= B*B;
	RET= A*B;
	
	cout<<fixed<<setprecision(3);
	cout<<"TRIANGULO: "<<TRI;
	cout<<"\n";
	cout<<"CIRCULO: "<<CIR;
	cout<<"\n";
	cout<<"TRAPEZIO: "<<TRA;
	cout<<"\n";
	cout<<"QUADRADO: "<<QUA;
	cout<<"\n";
	cout<<"RETANGULO: "<<RET<<endl;
}


