#include <iostream>

using namespace std;

int main()
{
	int n,ant,atu=1,prox=1;
	
	cin>>n;
	cout<<atu;
	
	for(int i=2 ; i<=n ; i++)
	{
		cout<<" "<<prox;
		ant=atu;
		atu=prox;
		prox=atu+ant;
	}

}
