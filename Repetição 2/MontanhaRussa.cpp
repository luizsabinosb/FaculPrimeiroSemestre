#include <iostream>

using namespace std;

int main()
{
	int n,amin,amax,contador,a;
	
	while(cin>>n>>amin>>amax)
	{
		contador=0;
		
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			if(a>=amin && a<=amax)
			{
				contador++;
			}	
		}
		cout<<contador<<endl;
	}
}
