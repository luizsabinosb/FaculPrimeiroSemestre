#include<iostream>

using namespace std;

int main()
{
	int ca,ba,pa,cr,br,pr,x,y,z,a;
	
	cin>>ca>>ba>>pa;
	cin>>cr>>br>>pr;
	
	x=ca-cr;
	y=ba-br;
	z=pa-pr;
	
	if(x>0)
	{
		x=0;
	}
	if(y>0)
	{
		y=0;
	}
	if(z>0)
	{
		z=0;
	}
	
	cout<<-(x+y+z)<<endl;
}
