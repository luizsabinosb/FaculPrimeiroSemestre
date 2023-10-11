#include <iostream>>
#include <iomanip>

using namespace std;

int main()
{
	double x=0;
	int n;
	
	cin>>n;
	
	for(x=1/6;n>0;n--)
	{
		x=1/(x+6);
	}
	cout<<fixed<<setprecision(10);
	cout<<x+3.0<<endl;
}
