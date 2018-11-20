#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Nodo struct nodo
#define ListDob struct listadoble

struct nodo{//------------------------------------------------------------------Definici�n de las partes del nodo
	int  dato;
	Nodo* siguiente;
};

struct listadoble{//------------------------------------------------------------Definici�n de las partes de la lista
	Nodo *inicio;
	Nodo *final;
};
Nodo *inicio=NULL;//------------------------------------------------------------Creaci�n de los apuntadores de inicio y final
Nodo *final=NULL;

void insertar(ListDob *list,int dato);//----------------------------------------Declaraci�n de los prototipos
Nodo *nuevoElemento(int dato);
void visualizarLista(ListDob nlista);
int eliminarNodo(ListDob*lista);
void insertarI(ListDob *list,int dato);

int main(int argc, char *argv[]) {//--------------------------------------------MAIN
	
	return 0;
}

void insertar(ListDob *list,int dato){//----------------------------------------Funci�n para insertar elementos en la fila o pila o lista final
	Nodo* nuevo=nuevoElemento(dato);
	if(list->inicio==NULL && list->final==NULL){
		list->inicio=nuevo;
		list->final=nuevo;
	}else{
		list->final->siguiente=nuevo;
		list->final=nuevo;
	}
}

Nodo *nuevoElemento(int dato){//------------------------------------------------Funci�n para crear nuevos elementos
	Nodo *q=(Nodo*)malloc(sizeof(Nodo));
	q->dato=dato;
	q->siguiente=NULL;
	return q;
}

void visualizarLista(ListDob nlista){//-----------------------------------------Funci�n para visualizar la lista
	if(nlista.inicio!=NULL){
		Nodo* aux=nlista.inicio;
		while(aux!=NULL){
			printf("%c ",aux->dato);
			aux=aux->siguiente;
		}
	}
}

int eliminarNodo(ListDob*lista){//----------------------------------------------Funci�n para eliminar nodos
	Nodo* aux=lista->inicio;
	int dato=aux->dato;
	lista->inicio=lista->inicio->siguiente;
	free(aux);
	return dato;
}

void insertarI(ListDob *list,int dato){//---------------------------------------Funci�n para insertar al inicio
	Nodo *nuevo=nuevoElemento(dato);
	if(list->inicio==NULL && list->final==NULL){
		list->inicio=nuevo;
		list->final=nuevo;
	}else{
		nuevo->siguiente=list->inicio;
		list->inicio=nuevo;
	}
}
