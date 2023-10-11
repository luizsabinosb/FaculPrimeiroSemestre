#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int cont=0;
	double x=0,y=0;
	
	while(1)
	{	
		if(cont==2)
		{
			break;
		}
		cin>>x;
		if(x>=1 && x<=10)
		{
			y+=x;
			cont++;
		}
		else
		{
			cout<<"nota invalida\n";
		}
	}
	cout<<fixed<<setprecision(2);
	cout<<"media = "<<y/2<<endl;
}
