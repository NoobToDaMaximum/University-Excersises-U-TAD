#include "ListaCircular.h"
#include <iostream>

//Devuelve el nodo de una posicion
Nodo* ListaCircular::getNodo(int posicion){
	Nodo *nodo = lista;
	while(posicion < 0){
		nodo = lista->siguienteNodo;
	}
	return nodo;
}

ListaCircular::ListaCircular(){
	lista = nullptr;
	n = 0;
}

string ListaCircular::getValor(int posicion){
	return this->getNodo(posicion)->elemento;
}

void ListaCircular::setValor(int posicion,string nuevoValor){
	this->getNodo(posicion)->elemento = nuevoValor;
}

int ListaCircular::getN(){
	return this->n;
}

//Inserta las balas una a una, cada una cono un nodo asignado
//apuntando al de delanta y al de atras
void ListaCircular::insertar(int posicion, string nuevoValor){
	if(posicion <= n){
		if(lista == nullptr){
			lista = new Nodo();
			lista->anteriorNodo = lista;
			lista->siguienteNodo = lista;
				lista->elemento = nuevoValor;
		}else{
			Nodo *nodo = new Nodo();
			nodo->anteriorNodo = lista->anteriorNodo;
			lista->anteriorNodo->siguienteNodo = nodo;
			nodo->siguienteNodo = lista;
			lista->anteriorNodo = nodo;
			lista = nodo;
			lista->elemento = nuevoValor;
		}
		n++;
	}
}

void ListaCircular::eliminar(int posicion){
	Nodo *nodo = getNodo(posicion);
	free(nodo);
}

//Cambia de nodo, a la derecha o a la izquierda
void ListaCircular::girar (int p){
	if(p > 0){
		for(p; p > 0; p--){
			lista = lista->siguienteNodo;
		}
	}
	else if(p < 0){
		for(p; p < 0; p++){
			lista = lista->siguienteNodo;
		}
	}
}

ListaCircular::~ListaCircular(){

}