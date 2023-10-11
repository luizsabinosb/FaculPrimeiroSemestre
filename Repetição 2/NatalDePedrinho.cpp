#include <iostream>

using namespace std;

int main()
{
	int m,d;
	
	while(cin>>m>>d)
	{
		int l;
		
		if(m==1)
		{
			l=360-d;
		}
		if(m==2)
		{
			l=360-d-31;
		}
		if(m==3)
		{
			l=360-d-31-29;
		}
		if(m==4)
		{
			l=360-d-31-29-31;
		}
		if(m==5)
		{
			l=360-d-31-29-31-30;
		}
		if(m==6)
		{
			l=360-d-31-29-31-30-31;
		}
		if(m==7)
		{
			l=360-d-31-29-31-30-31-30;
		}
		if(m==8)
		{
			l=360-d-31-29-31-30-31-30-31;
		}
		if(m==9)
		{
			l=360-d-31-29-31-30-31-30-31-31;
		}
		if(m==10)
		{
			l=360-d-31-29-31-30-31-30-31-31-30;
		}
		if(m==11)
		{
			l=360-d-31-29-31-30-31-30-31-31-30-31;
		}
		if(m==12)
		{
			l=360-d-31-29-31-30-31-30-31-31-30-31-30;
		}
		
		if(l==0)
		{
			cout<<"E natal!\n";
		}
		if(l==1)
		{
			cout<<"E vespera de natal!\n";
		}
		if(l>1)
		{
			cout<<"Faltam "<<l<<" dias para o natal!\n";
		}
		if(l<0)
		{
			cout<<"Ja passou!\n";
		}
	}
}
