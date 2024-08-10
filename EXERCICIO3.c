#include <stdio.h>
int main (){
	int valor, maior, menor;
	printf ("digite o 1 valor: "); 
	scanf ("%d", &valor);
	maior = valor; 
	menor = valor; 
	printf ("digite o 2 valor: "); 
	scanf ("%d", &valor);
	if (valor > maior){
		maior = valor; //4
	}
	if (valor < menor){ // 3
		menor = valor;
    }
    printf ("digite o 3 valor: ");
	scanf ("%d", &valor);
	if (valor > maior){
		maior = valor;
	}
	if (valor < menor){
		menor = valor;
    }
    printf ("digite o 4 valor: ");
	scanf ("%d", &valor);
	if (valor > maior){
		maior = valor;
	}
	if (valor < menor){
		menor = valor;
    }
    printf ("digite o 5 valor: ");
	scanf ("%d", &valor);
	if (valor > maior){
		maior = valor;
	}
	if (valor < menor){
		menor = valor;
    }
    printf ("o maior valor eh %d e o menor eh %d", maior, menor);
	return 0;
}
