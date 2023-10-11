#include <iostream>

using namespace std;

 int main()
 {
 	int n;
 	
	while(cin>>n)
	{
		int i,proximo=1,passado=0,atual=0;
		for(int i=1;i<=n;i++)
		{
			passado=atual;
			atual=proximo;
			proximo=atual+passado;
			if(proximo==3 || proximo%3==0)
			{
				cout<<proximo<<endl;
			}
		}
	}
 }
