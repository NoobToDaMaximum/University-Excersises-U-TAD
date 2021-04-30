#include<iostream>
using namespace std;

//Complejidad Espacial: n*n
//Complejidad Temporal: n
/*Recorre el array, el primer elemento lo guardamos como nuestro minumo, y escaneamos el array por uno mas pequeño actualizando el valor hasta encontrar el mas pequeño,
si se encuentra este y el valor inicial se cambiaran de posicion y pasaremos al segundo elemento. y asi hasta completar el algoritmo.*/
void ordenarSeleccion(int x[],int len)
{
	int aux;
	int pos = 0;
  	for(int i=0; i < len - 1; i++){
    	pos = i;
      	/*Añadir código de ordenar mediante selección */
    	for(int j = i + 1; j < len; j++){
    		if(x[j] < x[pos]){
    			pos = j;
    		}
    	}
    	aux = x[i];
    	x[i] = x[pos];
    	x[pos] = aux;
      	/*No tener en cuenta el siguiente bucle de impresion  para el calculo de la complejidad*/
      	for(int k=0;k<len;k++)
			cout<<x[k]<<" ";
      	cout<<endl;
    }
}



int main()
{
 int n;
 cin>>n;
 int *x=new int[n];
 for(int i=0;i<n;i++)
   cin>>x[i];
 ordenarSeleccion(x,n);
}

