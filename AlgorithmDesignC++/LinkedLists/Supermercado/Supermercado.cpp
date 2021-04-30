#include "Supermercado.h"

Supermercado::Supermercado(int n){
	this->n_cajas = n;
	this->cajas = new Cola[n];
}

void Supermercado::nuevoUsuario(int n, int id){
	this->cajas[n].encolar(id);
}

void Supermercado::cerrarCaja(int n){
	for(int i = 0; i <= n-1; i++){
		this->cajas[i].encolar(this->cajas[n].desencolar());
	}
}

int Supermercado::atenderUsuario(int n){
	return this->cajas[n].desencolar();
}

bool Supermercado::cajaVacia(int n){
	bool b = false;
	if(this->cajas[n].estaVacia()){
		b = true; 
	}
	return b;
}