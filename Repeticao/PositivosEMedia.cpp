#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double n,m=0;
	int p=0;
	
	for(int i=0; i<6; i++)
	{
		cin>>n;
		if(n>0)
		{
			p++;
			m=m+n;	
		}
	}
	cout<<fixed<<setprecision(1)<<p<<" valores positivos\n"<<m/p<<endl;
}
