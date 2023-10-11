#include <iostream>

using namespace std;

int main()
{
	int n,p=0,im=0,po=0,ne=0;
	
	for( int i=1; i<6 ; i++)
	{
		cin>>n;
		if(n%2==0)
		{
			p++;
		}
		if(n%2!=0)
		{
			im++;
		}
		if(n>0)
		{
			po++;
		}
		if(n<0)
		{
			ne++;
		}
	}
	cout<<p<<" valor(es) par(es)\n";
	cout<<im<<" valor(es) impar(es)\n";
	cout<<po<<" valor(es) positivo(s)\n";
	cout<<ne<<" valor(es) negativo(s)\n";
}
