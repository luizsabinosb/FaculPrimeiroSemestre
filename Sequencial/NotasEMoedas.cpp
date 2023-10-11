#include <iostream>
#include <iomanip>


using namespace std;

int main (){
	//5.50=550
	double N;
	int x,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
	cin>>N;
	
	x=N*100;
	
	a=x/10000;
	b=x%10000;
	c=b/5000;
	d=b%5000;
	e=d/2000;
	f=d%2000;
	g=f/1000;
	h=f%1000;
	i=h/500;
	j=h%500;
	k=j/200;
	l=j%200;
	m=l/100;
	n=l%100;
	o=n/50;
	p=n%50;
	q=p/25;
	r=p%25;
	s=r/10;
	t=r%10;
	u=t/05;
	v=t%05;
	w=v/01;
	
	
	cout<<"NOTAS:\n";
	cout<<a<< " nota(s) de R$ 100.00\n";
	cout<<c<< " nota(s) de R$ 50.00\n";
	cout<<e<< " nota(s) de R$ 20.00\n";
	cout<<g<<" nota(s) de R$ 10.00\n";
	cout<<i<<" nota(s) de R$ 5.00\n";
	cout<<k<<" nota(s) de R$ 2.00\n";
	cout<<"MOEDAS:\n";
	cout<<m<<" moeda(s) de R$ 1.00\n";
	cout<<o<<" moeda(s) de R$ 0.50\n";
	cout<<q<<" moeda(s) de R$ 0.25\n";
	cout<<s<<" moeda(s) de R$ 0.10\n";
	cout<<u<<" moeda(s) de R$ 0.05\n";
	cout<<w<<" moeda(s) de R$ 0.01\n";
}
