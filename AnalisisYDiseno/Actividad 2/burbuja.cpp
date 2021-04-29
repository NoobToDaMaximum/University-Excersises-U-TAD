#include<iostream>
using namespace std;


//Complejidad espacial: n*n
//Complejidad temporal: del numero de intercambios, numero de intercambio como maximo es igual al numero de terminos. por lo tanto numero de intercambio <= n
/*Recorres el array, si el primer elemento es mayor que el segundo los cambias de sitio usando un auxiliar
se repite el proceso para el resto. Una vez completado se vuelve a hacer otra vez hasta que los elementos esten ordenados de menor a mayor.*/
void ordenarBurbuja(int x[],int len)
{
	int aux;
	int comparisons = 0;
	int exchanges = 0;
  for(int i=1;i<len;i++)
    {
      /*Añadir código de ordenación usando algoritmo de burbuja*/
     	for (int j = 0; j < (len - i); j++){
     		comparisons++;
     		if(x[j] > x[j+1]){
     			aux = x[j];
     			x[j] = x[j+1];
     			x[j+1] = aux;
     			exchanges++;
     		}
     	}
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
 ordenarBurbuja(x,n);
}
