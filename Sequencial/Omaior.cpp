#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
int A,B,C,R,S,RM;

cin>>A>>B>>C;

R=(A+B+abs(A-B))/2;
RM=(R+C+abs(R-C))/2;

cout<<RM<<" eh o maior"<<endl;
}
