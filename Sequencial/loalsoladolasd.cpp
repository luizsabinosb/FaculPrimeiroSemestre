#include <iostream>
#include <math.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	float x, y; //cria��o das variaveis para atribui��o de valores (numeros)
	cout << "Digite o valor de X:" << endl; // o que o usu�rio deve fazer
	cin >> x; // entrada do valor de X
	y = (2*pow(x,x)) -3; // calculo de f(x), lembrando que y= f(x)
	cout << "O valor de f(x) � igual a " << y << endl; // impress�o final
}
