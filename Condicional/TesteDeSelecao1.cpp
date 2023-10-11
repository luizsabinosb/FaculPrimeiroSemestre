#include <iostream>

using namespace std;

int main (){
	
	int A,B,C,D;
	
	cin>>A>>B>>C>>D;
	
	if (B>C && D>A && A+B<C+D>0 && A%2==0 )
	{
		cout<<"Valores aceitos\n";
	}
	else
	{
		cout<<"Valores nao aceitos\n";
	}
}
