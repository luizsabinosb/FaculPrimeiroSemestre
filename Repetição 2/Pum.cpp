#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cin>>n;
	
	for(int i=1;i<=n*4;i+=4)
	{
		cout<<i<<" "<<i+1<<" "<<i+2<<" PUM"<<endl;
	}
}
