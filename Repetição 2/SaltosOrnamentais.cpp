#include <iostream>
#include <iomanip>

using namespace std;

int main()
{ 
	int c,i,j;
	string name;
	
	cin>>c;
	for(int i=1;i<=c;i++)
	{
		double dif,nota,max=-10.00,min=100.00,a=0;
		
		cin>>name;
		cin>>dif;
		for(j=1;j<=7;j++)
		{
			cin>>nota;
			if(nota>max)
			{
				max=nota;
			}
			if(nota<min)
			{
				min=nota;
			}
			a+=nota;
		}
		a-=(max+min);
		a*=dif;
		cout<<fixed<<setprecision(2);
		cout<<name<<" "<<a<<endl;
	} 	
}
