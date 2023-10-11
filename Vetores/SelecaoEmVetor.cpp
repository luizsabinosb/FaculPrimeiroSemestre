#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float a[10],n;
	int i;

	for(i=0;i<10;i++)
	{
		cin>>n;
		a[i]=n;
		
		if(a[i]<=10)
		{
			cout<<fixed<<setprecision(1);
			cout<<"A["<<i<<"] = "<<a[i]<<endl;
		}
	}

}

