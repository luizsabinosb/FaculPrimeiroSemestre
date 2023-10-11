#include <iostream>

using namespace std;

int main()
{
	int n,i,j,x;
	long long int fib[61];
	
	cin>>n;
	fib[0]=0;
	fib[1]=1;
	
	for(int i=2 ; i<61 ; i++)
	{
		fib[i]=fib[i-2]+fib[i-1];
	}
	for(j=0;j<n;j++)
	{
		cin>>x;
		cout<<"Fib("<<x<<") = "<<fib[x]<<endl;
	}
}
