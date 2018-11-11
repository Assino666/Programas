#include <stdio.h>//------------------------------------------------------------Inclusi�n de las nuevas librer�as
#include <stdlib.h>
#define Nodo struct nodo

Nodo{//-------------------------------------------------------------------------Definici�n de las partes del elemento de la lista
	int dato;
	Nodo *anterior;
	Nodo *siguiente;
};
Nodo *inicio=NULL;

void insertarInicio(int dato){//------------------------------------------------Funci�n para insertar al Inicio de la lista
	Nodo *nuevo=(Nodo*)malloc(sizeof(Nodo));
	nuevo->dato=dato;
	nuevo->anterior=NULL;
	nuevo->siguiente=NULL;
	if(inicio==NULL){
		inicio=nuevo;
	}
	else{
		inicio->anterior=nuevo;
		nuevo->siguiente=inicio;
		inicio=nuevo;
	}
}

void imprimirLista(){//---------------------------------------------------------Funci�n para imprimir los elementos de la lista
	Nodo *aux=inicio;
	while(aux!=NULL){
		printf("%i ",aux->dato);
		aux=aux->siguiente;
	}
}

int main(int argc, char *argv[]) {//--------------------------------------------Funci�n Main
	int N,i,dato;
	printf("Ingrese el n�mero de elementos que va a ingresar en la lista:\n");
	scanf("%i",&N);
	for(i=0;i<N;i++){
		printf("\nDigite el dato:\n");
		scanf("%i",&dato);
		insertarInicio(dato);
	}
	imprimirLista();
	return 0;
}
