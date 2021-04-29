#include<iostream>
using namespace std;


//Complejidad temporal: (n*n)/2
/*Examina cada elemento y lo compara con el de si izquierda, si este es mayor que el los intercambia de sitio*/
void ordenarInsercion(int x[],int len)
{
	int aux, j;
  for(int i=1;i<len;i++)
    { 
      /*Añadir código de ordenación mediante inserción*/
    	aux = x[i];
    	j = i-1;

    	while(j >= 0 && x[j] > aux){
    		x[j+1] = x[j];
    		j = j - 1;
    	}
    	x[j +1] = aux;
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
 ordenarInsercion(x,n);
}


