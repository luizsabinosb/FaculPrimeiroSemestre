#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	double A,N,R;

	cin>> R;	
	N =3.14159;	
	
	
	A = N * (R * R);

	cout<< fixed <<setprecision(4);
	cout<< "A = "<< A << endl;
}
