#include <iostream>

using namespace std;

int main()
{
	int n,max=0,posicao=0;
	
	for(int i=1;i<=100;i++)
	{
		cin>>n;
		if(n>max)
		{
			max=n;
			posicao=i;
		}
	}
	cout<<max<<endl;
	cout<<posicao<<endl;
}
