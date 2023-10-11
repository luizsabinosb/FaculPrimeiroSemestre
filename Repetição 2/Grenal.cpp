#include <iostream>

using namespace std;

int main()
{
	int goli=0,golg=0,wini=0,wing=0,grenais=0,empate=0,newgame=0;
	
	while(1)
	{
		cin>>goli>>golg;
		if(goli>golg)
		{
			wini++;
		}
		else
		{
			if(golg>goli)
			{
				wing++;
			}
			if(golg==goli)
			{
				empate++;
			}
		}
		grenais++;
		cout<<"Novo grenal (1-sim 2-nao)\n";
		cin>>newgame;
		
		if(newgame==2)
		{
			break;
		}
	}
	cout<<grenais<<" grenais"<<endl;
	cout<<"Inter:"<<wini<<endl;
	cout<<"Gremio:"<<wing<<endl;
	cout<<"Empates:"<<empate<<endl;
	if(wing>wini)
	{
		cout<<"Gremio venceu mais\n";
	}
	else
	{
		if(wini>wing)
		{
			cout<<"Inter venceu mais\n";
		}
		if(wini==wing)
		{
			cout<<"Nao houve vencedor\n";
		}
	}
}
