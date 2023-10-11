#include <iostream>

using namespace std;

int main()
{
	int senha;
	
	while(1)
	{
		cin>>senha;
		
		if(senha!=2002)
		{
			cout<<"Senha Invalida\n";
		}
		else
		{
			cout<<"Acesso Permitido\n";
			break;
		}
	}
}
