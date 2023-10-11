#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int l,i,j;
	float soma=0;
	string sm;
	cin>>l;
	float x[12][12];
	cin>>sm;
	
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			cin>>x[i][j];
		}
	}	
	
	for(j=0;j<12;j++)
	{
		soma+=x[l][j];
	}
	
	cout<<fixed<<setprecision(1);
	if(sm=="S")
	{
		cout<<soma<<endl;
	}
	if(sm=="M")
	{
		cout<<soma/12<<endl;
	}
}
