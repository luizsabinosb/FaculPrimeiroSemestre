#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	double x,y,z;
	
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>x>>y;
	
		if(y==0)
		{
			cout<<"divisao impossivel\n";
		}
		else
		{
			z=x/y;
			cout<<fixed<<setprecision(1);
			cout<<z<<endl;
		}
	}
}
