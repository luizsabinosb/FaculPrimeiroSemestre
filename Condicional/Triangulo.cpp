#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double A,B,C,area,p;
	
	cin>>A>>B>>C;
	
	if(A<B+C && B<A+C && C<A+B)
	{
		p=A+B+C;
		
		cout<<fixed<<setprecision(1);
		cout<<"Perimetro = "<<p<<endl;
	}
	else
	{
		area=((A+B)*C)/2;
		
		cout<<fixed<<setprecision(1);
		cout<<"Area = "<<area<<endl;
		
	}
}
