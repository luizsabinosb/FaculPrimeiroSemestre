#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	double n1,n2,n3,n4,m,mf,n5;
	
	cin>>n1>>n2>>n3>>n4;
	
	m=(n1*2+n2*3+n3*4+n4)/10;
	
	if(m>=7.0){
		cout<<fixed<<setprecision(1);
		cout<<"Media: "<<m<<endl;
		cout<<"Aluno aprovado.\n";
	}
	else{
		if(m<5.0){
				
				cout<<fixed<<setprecision(1);
				cout<<"Media: "<<m<<endl;
				cout<<"Aluno reprovado.\n";
			}
		
		else{
			if(m>=5.0 || m<7.0){
			cin>>n5;
			mf=(m+n5)/2;
			
			cout<<fixed<<setprecision(1);
			cout<<"Media: "<<m<<endl;
			cout<<"Aluno em exame.\n";
			cout<<"Nota do exame: "<<n5<<endl;
			cout<<"Aluno aprovado.\n";
			cout<<"Media final: "<<mf<<endl;
		}
		}
	}
	
}
