#include <iostream>

using namespace std;

int main()
{
	int t,b,ai,di,li,ai2,di2,li2,vd,vd2;
	
	cin>>t;
	
	for(int i=1;i<=t;i++)
	{
		cin>>b;
		cin>>ai>>di>>li;
		cin>>ai2>>di2>>li2;
		
		if(li%2==0)
		{
			vd=(((ai+di)/2)+b);
		}
		else
		{
			vd=(ai+di)/2;
		}
		if(li2%2==0)
		{
			vd2=(((ai2+di2)/2)+b);
		}
		else
		{
			vd2=(ai2+di2)/2;
		}
		
		if(vd>vd2)
		{
			cout<<"Dabriel\n";
		}
		else
		{
			if(vd==vd2)
			{
				cout<<"Empate\n";
			}
			if(vd<vd2)
			{
				cout<<"Guarte\n";
			}
		}
	}
	
}
