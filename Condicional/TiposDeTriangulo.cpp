#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    double a,b,c, maior, meio, menor;

	cin>>a>>b>>c;
   	
   	if (a >= b && a >= c)
   	{
   		maior = a;
   	}
   	else 
   		if (b >= a && b >= c)
   		{
   			maior = b;
   		}
   		else
   			if(c >= a && c >= b)
   			{
   				maior = c;
   			}

   	if (a >= b && a <= c || a >= c && a <= b)
   	{
   		meio = a;
   	}
   	else
   		if(b >= a && b <= c || b >= c && b <= a)
   		{
   			meio = b;
   		}
   		else
   			if(c >= a && c <= b || c >= b && c <= a)
   			{
   				meio = c;
   			}

   	if(a <= b && a <= c)
   	{
   		menor = a;
   	}
   	else
   		if(b <= a && a <= c)
   		{
   			menor = b;
   		}

   	else
   		if(c <= a && c <= b)
   		{
   			menor = c;
   		}

   	//cout<<"maior = "<<maior<<" meio = "<<meio<<" menor = "<<menor; 

   	a = maior;
   	b = meio;
   	c = menor;

    if(a>=b+c)
    {
        cout<<"NAO FORMA TRIANGULO\n";
    }
    else
    {
        if(a*a==b*b+c*c)    {
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
