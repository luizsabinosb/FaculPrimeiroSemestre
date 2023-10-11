#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double idade,soma=0,div=0,media;
	
	while(1)
	{
		cin>>idade;
		if(idade<0)
		{
			break;
		}
		soma+=idade;
		div++;
	}
	media=soma/div;
	cout<<fixed<<setprecision(2);
	cout<<media<<endl;
}
