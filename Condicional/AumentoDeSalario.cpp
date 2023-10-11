#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double s,sr,r;
	
	cin>>s;
	
	if(s>2000)
	{
		r=s*0.04;
		sr=s+r;
		
		cout<<fixed<<setprecision(2);
		cout<<"Novo salario: "<<sr<<endl;
			cout<<"Reajuste ganho: "<<r<<endl;
			cout<<"Em percentual: 4 %\n";
	}
	else
	{
		if(s>0 && s<=400)
		{
			r=s*0.15;
			sr=s+r;
		
			cout<<fixed<<setprecision(2);
			cout<<"Novo salario: "<<sr<<endl;
			cout<<"Reajuste ganho: "<<r<<endl;
			cout<<"Em percentual: 15 %\n";
		}
		if(s>400 && s<=800)
		{
			r=s*0.12;
			sr=s+r;
		
			cout<<fixed<<setprecision(2);
			cout<<"Novo salario: "<<sr<<endl;
			cout<<"Reajuste ganho: "<<r<<endl;
			cout<<"Em percentual: 12 %\n";
		}
		if(s>800 && s<=1200)
		{
			r=s*0.1;
			sr=s+r;
		
			cout<<fixed<<setprecision(2);
			cout<<"Novo salario: "<<sr<<endl;
			cout<<"Reajuste ganho: "<<r<<endl;
			cout<<"Em percentual: 10 %\n";	
		}
		if(s>1200 && s<=2000)
		{
			r=s*0.07;
			sr=s+r;
		
			cout<<fixed<<setprecision(2);
			cout<<"Novo salario: "<<sr<<endl;
			cout<<"Reajuste ganho: "<<r<<endl;
			cout<<"Em percentual: 7 %\n";
		}
	}
}
