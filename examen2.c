//este programa debe tener tamaño de arreglo impar
//un pivote
//quicksort
//criterio lomuto
//examen criterio hoare
#include "librerias.h"

int kSize=9;

void imprimearreglo(int* arreglo, int size) {
	for(int i=0; i<size; ++i) {
		printf("%d     ", arreglo[i]);
	}
	printf("\n");
}


void swap(int* c, int* d){
	double t;
	t=*c;
	*c=*d;
	*d=t;
}
int pivote(int a[], int p, int r) {
	int x=a[p];
	int i=p-1;
	int j=r;
	while (1) {
		do j--;
		while (a[j]>x);
		do i++;
		while (a[i]<x);
		if (i<j) {
			swap(&a[i], &a[j]);
		} else {
			return j+1;
		}
	}
}

void quicksorthoare(int a[],int size, int inicio, int fin) {
	int q;
	if (fin-inicio<2) return;
	q=pivote(a, inicio, fin);
	quicksorthoare(a,kSize, inicio, q);
	quicksorthoare(a,kSize, q, fin);
}
int main(int argc, char* argv[]) {
	int arreglo[] = {21,3,7,1,9,6,15,5,3};
	imprimearreglo(arreglo, kSize);
	quicksorthoare(arreglo, kSize, 0, kSize);
	imprimearreglo(arreglo, kSize);
}
