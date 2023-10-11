#include <iostream>

using namespace std;

int main()
{
	
	int n,t,i,j,num,nums,k,quantidade=0;
	long long fib[110];
	
	cin>>t;
	fib[0]=0;
	fib[1]=1;
	
	for(int i=2 ; i<110 ; i++)
	{
		fib[i]=fib[i-2]+fib[i-1];
	}
	
	for(j=0;j<t;j++)
	{
		cin>>nums;
		for(k=0;k<nums;k++)
		{
			cin>>num;
			
			for(i=1;i<110;i++)
			{
				if(num==fib[0] || num==fib[1] || num==fib[i])
				{
					quantidade++;
					cout<<"Sim "<<quantidade<<endl;
				}
				else
				{
					cout<<"Nao, bora pra proxima"<<endl;
				}
			}
		}
	}
}

