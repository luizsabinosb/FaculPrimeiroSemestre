#include <iostream>

using namespace std;

int main ()
{
	 int dia, diafim, hora, horafim, minuto, minutofinal, segundo, segundofinal;
	string x;

	cin>>x>>dia;
	cin>>hora>>x>>minuto>>x>>segundo;
	cin>>x>>diafim;
	cin>>horafim>>x>>minutofinal>>x>>segundofinal;
	
	segundo = segundofinal - segundo;
	minuto = minutofinal - minuto;
	hora = horafim - hora;
	dia = diafim - dia;

	if (segundo < 0)
	{
		 segundo += 60;
		 minuto--;
 	}			

 	if (minuto < 0)
	{
 		minuto += 60;
		 hora--;
 	}

	if (hora < 0)
	{
 		hora += 24;
 		dia--;
 	}
 	
 	cout<<dia<<" dia(s)\n";
 	cout<<hora<<" hora(s)\n";
 	cout<<minuto<<" minuto(s)\n";
 	cout<<segundo<<" segundo(s)\n";
}
