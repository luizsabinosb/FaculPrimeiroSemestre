#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float v,d,a=0,al=0,pi,r;
	
	while(cin>>v>>d)
	{
		pi=3.14;
		r=d/2;
		a=pi*(r*r);
		al=v/(pi*(r*r));
		
		cout<<fixed<<setprecision(2);
		cout<<"ALTURA = "<<al<<endl;
		cout<<"AREA = "<<a<<endl;
	}	
}
