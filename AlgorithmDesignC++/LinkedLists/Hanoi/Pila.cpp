#include"Pila.h"

Pila::Pila(string name)
{
	this->name = name;
	this->cima = new Nodo(0,NULL);
}

std::string Pila::nombrePila()
{
	return this->name;
}

void Pila::apilar(int num)
{
  	cout<<"Apilando disco "<<num<<" en poste "<<name<<endl;
  	Nodo *n = new Nodo(num,cima);
  	this->cima = n;
}

int Pila::desapilar()
{    
	int num = cima->valor;
  	cout<<"Desapilando disco "<<num<<" del poste "<<name<<endl;
  	Nodo *nodo = cima;
  	cima = cima->siguiente;
  	free(nodo);
  	return num;
}

bool Pila::estaVacia()
{
	bool b = false;
	if(cima == nullptr){
		b = true;
	}
	return b;
}

