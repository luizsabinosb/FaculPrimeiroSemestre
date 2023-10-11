#include <iostream>

using namespace std;

int main()
{
	
	int a,b,x;
	
	cin>>a>>b;
	
	if(a==b)
	{
		cout<<"O JOGO DUROU 24 HORA(S)\n";
	}
	else
	{
		if(a>b)
		{
			x=(24-a)+b;
			cout<<"O JOGO DUROU "<<x<<" HORA(S)\n";
		}
		else
		{
			x=b-a;
			cout<<"O JOGO DUROU "<<x<<" HORA(S)\n";
		}
	}
}
