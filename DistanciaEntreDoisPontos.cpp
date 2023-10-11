#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	
	double x1,y1;
	double x2,y2,D,a,b;
	
	cin>>x1>>y1;
	cin>>x2>>y2;
	
	a=x2-x1;
	b=y2-y1;
	
	D=sqrt(a*a+b*b);
	
	
	cout<<fixed<<setprecision(4);
	cout<<D<<endl;
}
