#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	if(n==61 || n==71 || n==11 || n==21 || n==32 || n==19 || n==27 || n==31)
	{
		if(n==61)
		{
			cout<<"Brasilia\n";	
		}
		if(n==71)
		{
			cout<<"Salvador\n";
		}
		if(n==11)
		{
			cout<<"Sao Paulo\n";
		}
		if(n==21)
		{
			cout<<"Rio de Janeiro\n";
		}
		if(n==32)
		{
			cout<<"Juiz de Fora\n";
		}
		if(n==19)
		{
			cout<<"Campinas\n";
		}
		if(n==27)
		{
			cout<<"Vitoria\n";
		}
		if(n==31)
		{
			cout<<"Belo Horizonte\n";
		}
	}
	else
	{
		cout<<"DDD nao cadastrado\n";
	}
}
