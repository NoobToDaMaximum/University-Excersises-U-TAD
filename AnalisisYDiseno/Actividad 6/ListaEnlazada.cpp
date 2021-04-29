#include "ListaEnlazada.h"
#include <iostream>

//Complejidad Temporal O(n)
//Complejidad espacial O(n^2) en el peor de los casos al final

//Busca por todos los nodos
//cada vez que pasa al siguiente nodo sumo 1 a mi variable auxiliar
//Cuando esta sea igual a posicion devuelve el Nodo
Nodo * ListaEnlazada::getNodo(int posicion){
	if(this->lista == NULL){
		return NULL;
	}else{
		Nodo* puntero = this->lista;
		int pos = 0;
		while(pos < posicion && puntero->siguienteNodo){
			puntero = puntero->siguienteNodo;
			pos++;
		}
		if(pos != posicion){
			return NULL;
		}else{
			return puntero;
		}
	}
}

//inicializo las variables
ListaEnlazada::ListaEnlazada(){
	this->n = 0;
	this->lista = new Nodo;
	this->lista->elemento = 0;
	this->lista->siguienteNodo = NULL;
}

//Usa la funcion getNodo y coge el elemento de ese nodo
int ListaEnlazada::getValor(int posicion){
	return this->getNodo(posicion)->elemento;
}

//Usa la funcion getNodo para acceder al elemento de ese nodo y asignarle el valor
void ListaEnlazada::setValor(int posicion, int nuevoValor){
	this->getNodo(posicion)->elemento = nuevoValor;
}

//Devuelve el numero de nodos
int ListaEnlazada::getN(){
	return this->n;
}

//Inserta siempre un nodo a la derecha, para eso creo un nodo auxiliar
//para asignarle el siguiente nodo a todos los nodos que "muevo"
void ListaEnlazada::insertar(int posicion, int nuevoValor){
	this->n++;
	Nodo* nodo = getNodo(posicion);
	if(this->lista == NULL){
		this->lista == nodo;
	}else{
		Nodo* puntero = this->lista;
		int pos = 0;
		while(puntero->siguienteNodo){
			puntero = puntero->siguienteNodo;
			pos++;
		}
	}
}

//Elimina un nodo y mueve los nodos a la izquierda
//uso varios nodos auxiliares para poder reasignar los siguientes nodos a cada uno
void ListaEnlazada::eliminar(int posicion){
	if(this->lista){
		if(posicion == 0){
			Nodo* eliminado = this->getNodo(posicion);
			this->lista = this->lista->siguienteNodo;
			delete eliminado;
			this->n--;
		}else{
			Nodo* puntero = getNodo(posicion);
			int pos = 0;
			while(posicion < (n-1)){
				puntero = puntero->siguienteNodo;
				pos++;
			}
			Nodo* eliminado = puntero->siguienteNodo;
			puntero->siguienteNodo = eliminado->siguienteNodo;
			delete eliminado;
			this->n--;
		}
	}
}

void ListaEnlazada::concatenar(ListaEnlazada *ListaAConcatenar){

}

//Compara el elemento del nodo con el elemento a buscar si son iguales devuelve el elemento
int ListaEnlazada::buscar(int elementoABuscar){
	Nodo *q = this->lista;
	int i = 0;
	while(q != NULL){
		if(q->elemento == elementoABuscar){
			return i;
		}
		q = q->siguienteNodo;
		i++;
	}
	return -1;
}

//borra la lista
ListaEnlazada::~ListaEnlazada(){
	delete lista;
}