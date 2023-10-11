#include <iostream>

using namespace std;

int main()
{
	int v,i,n[10];
	cin>>v;
	
	for(i=0;i<10;i++)
	{
		n[i]=v;
		v*=2;
		cout<<"N["<<i<<"] = "<<n[i]<<endl;

	}
	
}
