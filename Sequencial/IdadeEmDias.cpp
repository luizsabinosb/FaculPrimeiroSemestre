#include <iostream>

using namespace std;

int main (){
	
	int d,D,M,A;
	
	cin>>d;
	
	A=d/365;
	M=(d%365)/30;
	D=(d%365)%30;
	
	cout<<A<<" ano(s)\n";
	cout<<M<<" mes(es)\n";
	cout<<D<<" dia(s)\n";
}
