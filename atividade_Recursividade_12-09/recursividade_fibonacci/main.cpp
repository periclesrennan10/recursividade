#include <iostream>
using namespace std;

int fibonacci(int n){
	
	if (n <= 0){
		return 0;
	}else if (n == 1){
			return 1;
	}else {
		return fibonacci(n -1) + fibonacci(n - 2);
	}
 
}

int main(){
	int n;
	
	cout << "Digite o numero para calcular o n-esimo termo da sequencia de fibonacci: ";
	cin >> n;
	
	int resultado = fibonacci(n);
	
	cout << "O resultado eh: " << resultado;
	
	return 0;
}
