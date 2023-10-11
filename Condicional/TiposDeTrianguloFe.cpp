#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double a,b,c;
	
	cin>>a>>b>>c;
	
	if(c>b && c>a && b>a)
	{
	c=a;
	b=b;
	a=c;	
	}
	if(b>a && b>c && c>a)
	{
	b=a;
	c=b;
	a=c;	
	}
	if(a>b && a>c && b>c)
	{
	a=a;
	b=b;
	c=c;
	}
	if(c>a && c>b && a>b)
	{
	c=a;
	a=b;
	b=c;	
	}
	if(b>a && b>c && a>c)
	{
	b=a;
	a=b;
	c=c;
	}
	if(a>c && a>b && c>b)
	{
	a=a;
	c=b;
	c=b;
	}
	
	if(a>=b+c)
	{
		cout<<"NAO FORMA TRIANGULO\n";
	}
	else
	{
		if(a*a==b*b+c*c)	{
			cout<<"TRIANGULO RETANGULO\n";
		}

		if(a*a>b*b+c*c)
			{
			cout<<"TRIANGULO OBTUSANGULO\n";
			}

		if(a*a < b*b + c*c)
			{
			cout<<"TRIANGULO ACUTANGULO\n";
				}
			
		if(a==b && b==c)
				{
			cout<<"TRIANGULO EQUILATERO\n";
				}
				
		if(a==b && b!=c)
					{
			cout<<"TRIANGULO ISOSCELES\n";
						}
		if(b==c && c!=a){
			cout<<"TRIANGULO ISOSCELES\n";
		}
		if(c==a && b!=a){
			cout<<"TRIANGULO ISOSCELES\n";
		}
 	}
}
