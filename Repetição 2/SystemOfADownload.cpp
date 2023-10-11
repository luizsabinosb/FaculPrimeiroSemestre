#include <iostream>

using namespace std;

int main()
{
	int n,n1=0,n2=0,soma=0;
	
	
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		
		cin>>n1>>n2;
		
		soma=n1+n2;
		
		if(soma>10)
		{
			break;
		}
		else
		{
			if(soma==0)
			{
				cout<<"PROXYCITY\n";
			}
			if(soma==1)
			{
				cout<<"P.Y.N.G.\n";
			}
			if(soma==2)
			{
				cout<<"DNSUEY!\n";
			}
			if(soma==3)
			{
				cout<<"SERVERS\n";
			}
			if(soma==4)
			{
				cout<<"HOST!\n";
			}
			if(soma==5)
			{
				cout<<"CRIPTONIZE\n";
			}
			if(soma==6)
			{
				cout<<"OFFLINE DAY\n";
			}
			if(soma==7)
			{
				cout<<"SALT\n";
			}
			if(soma==8)
			{
				cout<<"ANSWER!\n";
			}
			if(soma==9)
			{
				cout<<"RAR?\n";
			}
			if(soma==10)
			{
				cout<<"WIFI ANTENNAS\n";
			}
		}
	}
}
