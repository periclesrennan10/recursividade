#include <iostream>
using namespace std;

void vetorInvertido(int vetor[], int inicio, int fim){
	if (inicio < fim){
		int aux = vetor[inicio];
		vetor[inicio] = vetor[fim];
		vetor[fim] = aux;
		
		vetorInvertido(vetor, inicio + 1, fim - 1);
	}
	
	
}

int main() {
	int tamanho;
	cout << "Digite o tamanho do vetor: ";
	cin >> tamanho;
	
	int vetor[tamanho];
	cout << "Digite os elementos do vetor: ";
	for (int i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	
	vetorInvertido(vetor, 0, tamanho - 1);
	
	cout << "Vetor invertido: ";
	for (int i = 0; i < tamanho; i++){
		cout << vetor[i] << " ";
	}
	
	return 0;
}
