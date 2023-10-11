#include <iostream>

using namespace std;

int main()
{
	string c,sc,ssc,vertebrado;
	
	cin>>c>>sc>>ssc;
	
	if(c=="vertebrado")
	{
		if(sc=="ave")
		{
			if(ssc=="carnivoro")
			{
				cout<<"aguia\n";
			}
			else
			{
				cout<<"pomba\n";
			}
		}
		else
		{
			if(ssc=="onivoro")
			{
				cout<<"homem\n";
			}
			else
			{
				cout<<"vaca\n";
			}
		}
	}
	else
	{
		if(sc=="inseto")
		{
			if(ssc=="hematofago")
			{
				cout<<"pulga\n";
			}
			else
			{
				cout<<"lagarta\n";
			}
		}
		else
		{
			if(ssc=="hematofago")
			{
				cout<<"sanguessuga\n";
			}
			else
			{
				cout<<"minhoca\n";
			}
		}
	}
	
}
	
	
