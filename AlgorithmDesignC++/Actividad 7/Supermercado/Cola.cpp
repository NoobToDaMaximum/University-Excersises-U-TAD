#include "Cola.h"

//Constructor de la clase Cola
Cola::Cola(){
	this->principio = NULL;
	this->final = NULL;
}

//Tenemos dos atributos, principio recorre hasta final
//y final hasta principio
void Cola::encolar(int num){
	Nodo* aux = this->principio;
	this->final = new Nodo(num, this->final);
	if(this->principio != NULL){
		while(aux->siguiente != NULL){
			aux = aux->siguiente;
		}
		aux->siguiente = new Nodo(num, NULL);
	}else{
		this->principio = new Nodo(num, NULL);
	}
}

//Va quitando los clientes
int Cola::desencolar(){
	int id = this->principio->valor;
	this->principio = this->principio->siguiente;
	return id;
}

//Comprueba si la cola esta vacia
bool Cola::estaVacia(){
	bool b = false;
	if(this->principio == NULL){
		b = true;
	}
	return b;
}