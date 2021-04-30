#include "ListaContigua.h"
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

//Complejidad Temporal O(n)
//Complejidad espacial O(n)

//Inicializa Variabels
ListaContigua::ListaContigua(int incremento){
	this->n = 0;
	this->capacidad = incremento;
	this->incremento = incremento;
	this->vector = (int*) malloc(this->capacidad*sizeof(int));
}

//Elimina la lista
ListaContigua::~ListaContigua(){
	free(this->vector);
}

//Devuelve el valor de la posicion
int ListaContigua::getValor(int posicion){
	return this->vector[posicion];
}

//Reescribe el valor de la posicion
void ListaContigua::setValor(int posicion, int nuevoValor){
		this->vector[posicion] = nuevoValor;
}

//devuelve el numero de elementos
int ListaContigua::getN(){
	return this->n;
}

//Devuelve la capacidad, numero de elementos que puede guardar
int ListaContigua::getCapacidad(){
	return this->capacidad;
}

//Inserta un valor en la lista
//Al insertar mueve todos los valores a la derecha,
//Si sobra/falta espacio vuelve a calcular la capacidad de la lista
void ListaContigua::insertar(int posicion, int nuevoValor){
	if(this->capacidad <= posicion){
		while(this->capacidad <= posicion){
			this->capacidad = this->capacidad + this->incremento;
		}
		this->vector = (int*) realloc(this->vector, this->capacidad*sizeof(int));	
	}
	this->n++;
	memmove(this->vector + posicion + 1, this->vector + posicion, (this->n-posicion)*sizeof(int));
	this->vector[posicion] = nuevoValor;
}

//Elimina un elemento de la lista, n--
//Si sobra espacio calulamos la capacidad de la lista
//Mueve todos los elementos a la izquierda
void ListaContigua::eliminar(int posicion){
	memmove(this->vector + posicion, this->vector + posicion + 1, (this->n-posicion-1)*sizeof(int));
	this->n -= 1;
	if(this->n <= this->capacidad - 2*this->incremento){
		this->capacidad = this->capacidad - this->incremento;
		this->vector = (int*) realloc(this->vector, this->capacidad*sizeof(int));
	}
}

//Duplica la capacidad de la lista y copia todos los elementos en orden y los pone al final
void ListaContigua::concatenar (ListaContigua *listaAConcatenar){
	if(this->capacidad < this->n + listaAConcatenar->n){
		while(this->capacidad < this->n + listaAConcatenar->n){
			this->capacidad = this->capacidad + this->incremento;
		}
		this->vector = (int*) realloc(this->vector, this->capacidad*sizeof(int));
	}
	//int posicion = this->n;
	for(int i = 0; i < listaAConcatenar->n; i++){
		this->insertar(this->n+i, listaAConcatenar->vector[i]);
		//posicion++;
	}
}

//Busca un elemento
int ListaContigua::buscar(int elementoABuscar){
	for(int i = 0; i < *this->vector; i++){
		if(this->vector[i] == elementoABuscar){
			return i;
		}
	}
	return -1;
}