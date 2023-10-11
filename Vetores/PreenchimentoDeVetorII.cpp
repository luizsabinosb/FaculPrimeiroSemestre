#include <iostream>
using namespace std;

int main()
{
	int t,i,n[1000],cont=0;
	cin>>t;
	
	for(i=0;i<1000;i++)
	{
		n[i]=cont;
		cont++;
		{
			if(cont==t)
			{
				cont=0;
			}
		}
	}
	for(i=0;i<1000;i++)
	{
		cout<<"N["<<i<<"] = "<<n[i]<<endl;
	}
}
