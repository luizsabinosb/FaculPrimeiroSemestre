#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	double n1,n2,m;
	string aluno;
	
	cout<<"Digite o nome do Aluno:";

	cin>>aluno;
	
	cout<<"Digite a Nota 1:";
	
	cin>>n1;
	
	cout<<"Digite a Nota 2:";
	
	cin>>n2;
	
	
	m=(n1*2+n2*3)/5;
	
	cout<<fixed<<setprecision(2);
	cout<<"O Aluno "<<aluno<<" obteve a média "<<m<<"."<<endl;
	
	
	
	
}
