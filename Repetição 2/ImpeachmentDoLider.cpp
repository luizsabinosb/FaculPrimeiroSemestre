#include <iostream>

using namespace std;

int main()
{
	int v,favoravel;
	float n,nt;
	
	while(cin>>n)
	{
		nt=n*2/3;
		favoravel=0;
		v=0;
		for(int i=1;i<=n;i++)
		{
			cin>>v;
			
			if(v==1)
			{
				favoravel++;
			}
		}
		if(favoravel>=nt)
		{
			cout<<"impeachment\n";
		}
		else
		{
			cout<<"acusacao arquivada\n";
		}
	}
}
