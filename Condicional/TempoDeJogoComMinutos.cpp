#include <iostream>

using namespace std;

int main()
{
	int hf,hi,mf,mi,ht,mt;
	
	cin>>hi>>mi>>hf>>mf;
	
	ht=hf-hi;
	mt=mf-mi;
	
	if(mt<0)
	{
		mt+=60;
		ht--;
	}
	if(ht<0)
	{
		ht+=24;
	}
	if(hi==hf && mf==mi)
	{
		cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
	}
	else
	{
		cout<<"O JOGO DUROU "<<ht<<" HORA(S) E "<<mt<<" MINUTO(S)\n";
	}
}
