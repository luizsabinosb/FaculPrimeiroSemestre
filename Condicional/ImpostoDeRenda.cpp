#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double s,x;
	cin>>s;
	if(s<= 2000)
	{
		cout<<"Isento\n";
	}
	else
	{
		if(s<=3000)
		{
			x = (s-2000)*0.08;
			cout<<fixed<<setprecision(2);
			cout<<"R$ "<<x<<endl;
		}
		else
		{
			if(s<=4500)
			{
				x=(s-3000)*0.18+(1000*0.08);
				cout<<fixed<<setprecision(2);
				cout<<"R$ "<<x<<endl;
			}
			else
			{
				x=(s-4500)*0.28+(1500*0.18)+(1000*0.08);
				cout<<fixed<<setprecision(2);
				cout<<"R$ "<<x<<endl;
			}
		}
	}
}
