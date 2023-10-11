#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int p,n,c,ant,v,r=0;
	
	cin>>p>>n;
	
	n--;
	
	cin>>ant;
	
	while(n--)
	{
		cin>>v;
		
		if(abs(v-ant)>p)
		{
			r=1;
			break;
		}
		ant=v;
	}
	if(r==1)
	{
		cout<<"GAME OVER\n";
	}
	else
	{
		cout<<"YOU WIN\n";
	}
}
