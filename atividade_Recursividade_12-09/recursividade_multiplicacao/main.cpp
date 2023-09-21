#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int recursividadeMultiplicacao(int a, int b){
	if (a == 0 || b == 0){
		return 0;
	}
	
	if (b == 1){
		return a;
	}
	
	return a + recursividadeMultiplicacao(a, b - 1);
}

int main(){
	int a = 6;
	int b = 4;
	
	int resultado = recursividadeMultiplicacao(a, b);
	
	cout << a << " * " << b << " = "<< resultado;
	
	return 0;
}
