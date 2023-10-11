#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i;
	double x,n[100];
	
	cin>>x;
	
	n[0]=x;
	cout<<fixed<<setprecision(4);
	cout<<"N[0] = "<<n[0]<<endl;
	for(i=1;i<100;i++)
	{
		n[i]=n[i-1]/2;
		cout<<"N["<<i<<"] = "<<n[i]<<endl;
	}
}

