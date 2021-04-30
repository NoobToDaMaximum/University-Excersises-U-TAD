#include "Matriz.h"
#include  <iostream>
#include  <math.h>
#include  <stdlib.h>
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}

//Constructor por defecto
  Matriz::Matriz(){
    matriz = NULL;
    n_filas = 0;
    n_columnas = 0;
  }

//Constructor por parametros
  Matriz::Matriz(int n_filas, int n_columnas){
    this->n_filas = n_filas;
    this->n_columnas = n_columnas;
    //asignacion de memoria dinamica
    matriz = new double *[n_filas];
    for(int i = 0; i < n_filas;i++){
      matriz[i] = new double [n_columnas];
    }
    // matriz = new duble[n_filas][n_columnas]??
  }

//Constructor copia
  Matriz::Matriz(const Matriz &obj){
    *matriz = new double;
    *matriz = *obj.matriz;
    n_filas = obj.n_filas;
    n_columnas = obj.n_columnas;
  }

//Destructor
  Matriz::~Matriz(){
    for(int i = 0; i < n_filas; i++){
      delete[] matriz[i];
    }
    delete[] matriz;
  } 

//Le suma una matriz a otra
Matriz& Matriz::operator+ (const Matriz &m){
  Matriz *m1 = new Matriz(this->n_filas,this->n_columnas);
  if(m.n_filas == this->n_filas && m.n_columnas == this->n_columnas){ 
    for(int i = 0;i < n_filas; i++){
      for(int j = 0;j < n_columnas; j++){
        (*m1).matriz[i][j] = this->matriz[i][j] + m.matriz[i][j];
      }
    }
  }
  return *m1;
}

//Le resta una matriz a otra
Matriz& Matriz::operator- (const Matriz &m){
  Matriz *m1 = new Matriz(this->n_filas,this->n_columnas);
  if(m.n_filas == this->n_filas && m.n_columnas == this->n_columnas){ 
    for(int i = 0;i < n_filas; i++){
      for(int j = 0;j < n_columnas; j++){
        (*m1).matriz[i][j] = this->matriz[i][j] - m.matriz[i][j];
      }
    }
  }
  return *m1;
}

//Multiplica una matriz por un escalar
Matriz& Matriz::operator*(double scalar){
  Matriz *m1 = new Matriz(this->n_filas,this->n_columnas);
  for(int i = 0;i < n_filas; i++){
    for(int j = 0;j < n_columnas; j++){
      (*m1).matriz[i][j] = this->matriz[i][j] * scalar;
    }
  }
  return *m1;
}

//Multiplica dos matrices
Matriz& Matriz::operator*(const Matriz &m){
  Matriz *m1 = new Matriz(this->n_filas, m.n_columnas);;
  if(m.n_filas == this->n_columnas){
    for(int i = 0; i < n_filas; i++){
      for(int j = 0; j < n_columnas; j++){
        for(int k = 0; k < this->n_columnas; k++){
          (*m1).matriz[i][j] += this->matriz[i][k] * m.matriz[k][j];
        }
      }
    }
  }
  return *m1;
}

//calcula la traspuesta de una matriz
Matriz& Matriz::calcularTraspuesta(){
  Matriz *m1 = new Matriz(this->n_filas, this->n_columnas);
  for(int i = 0; i < n_filas; i++){
    for(int j = 0; j < n_columnas; j++){
      (*m1).matriz[i][j] = this->matriz[j][i];
    }
  }
  return *m1;
}

//Devuelve true si la matriz es simetrica
bool Matriz::esSimetrica(){
  bool simetria = false;
  for(int i = 0; i < n_filas; i++){
    for(int j = 0; j < n_columnas; j++){
      if(this->matriz[i][j]==this->matriz[j][i]){
        simetria = true;
      }
    }
  }
  return simetria;
}

//Obtiene el valor maximo de la matriz
double Matriz::obtenerMaximo(){
  double valorMaximo = this->matriz[0][0];
  for(int i = 0; i < n_filas; i++){
    for(int j = 0; j < n_columnas; j++){
      if(this->matriz[i][j] > valorMaximo){
        valorMaximo = this->matriz[i][j];
      }
    }
  }
  return valorMaximo;
}

//Obtiene el valor minimo de la matriz
double Matriz::obtenerMinimo(){
  double valorMinimo = this->matriz[0][0];
  for(int i = 0; i < n_filas; i++){
    for(int j = 0; j < n_columnas; j++){
      if(this->matriz[i][j] < valorMinimo){
        valorMinimo = this->matriz[i][j];
      }
    }
  }
  return valorMinimo;
}


//Asignacion de matrices

Matriz& Matriz::operator= (const Matriz &m)
{
  if(matriz!=NULL)
    {
      for (int i = 0; i < n_filas; i++)
  delete[] matriz[i];
      
      delete[] matriz;
      matriz=NULL;
    }

  this->n_filas=m.n_filas;
  this->n_columnas=m.n_columnas;
  this->matriz=NULL;
  if(n_filas>0 && n_columnas>0)
    {
      matriz= new double *[n_filas];
  
      for (int i = 0; i < n_filas; i++)
  {
    matriz[i] = new double[n_columnas];  
    for(int j=0; j <n_columnas; j++)
      matriz[i][j]=m.matriz[i][j];
  }
    }
  
    return(*this); 
}


// Leer matriz
void Matriz::rellenarManual()
{
  double elemento;
  for (int i = 0; i < n_filas; i++){
      cout << "Fila " << i << endl;
      for (int j = 0; j < n_columnas; j++){
        cout << "Elemento " << j << endl;
        cin >> elemento;
        matriz[i][j] = elemento;
      }
      cout << endl;
    }
  
}

// Rellenar Matriz Aleatoria
void Matriz::rellenarAleatorio(long seed)
{
  srand(seed);
  for (int i = 0; i < n_filas; i++)
    for (int j = 0; j < n_columnas; j++)
      matriz[i][j]=rand();
  
}



// Imprimir Matriz
void Matriz::mostrarMatriz()
{
  for (int i = 0; i < n_filas; i++){
    for (int j = 0; j < n_columnas; j++){
     cout << matriz[i][j] << " ";   
    }
    cout << endl;
  }
}

