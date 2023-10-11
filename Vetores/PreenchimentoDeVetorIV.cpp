#include <iostream>

using namespace std;

int main()
{
	int	j=0,i,n,p=0,im=0;
	int par[5],impar[5];

	for(i=0;i<15;i++)
	{
		cin>>n;
		
		if(n%2==0)
		{
			par[p]=n;
			cout<<"par["<<p<<"] = "<<par[p]<<endl;
			p++;
			
			if(p==5)
			{
				p=0;
			}
		}
		else
		{
			impar[im]=n;
			cout<<"impar["<<im<<"] = "<<impar[im]<<endl;
			im++;
			
			if(i==5)
			{
				i=0;
			}
		}
	}
}
