#include<iostream>
using namespace std;

//Combina los 2 arrays
void  combinar (int a[ ] , int len_a , int b[ ] , int len_b , int c[ ])
{
  /*Añadir código que permite combinar dos arrays */
	int sec_a = 0, sec_b = 0;
	int len_c = len_a + len_b;

	for(int i = 0; i < len_c; i++){
		if(sec_b >= len_b || (sec_a <= len_a && a[sec_a]<b[sec_b])){
			c[i] = a[sec_a];
			sec_a++;
		}else{
			c[i] = b[sec_b];
			sec_b++;
		}
	}
}

//Ordena los arrays
void ordenarMergeSort (int x[], int len)
{
	int temp[len];
  	if(len <= 1){ /*caso básico */
    	return;
  	}else{
      /*Ordenar dos mitades */
  		int half = len/2;
  		int len_right = 0, len_left = 0;
  		int right[half + 1], left[half + 1];

  		for(int i = 0; i < len; i++){
  			if(i < half){
  				left[i] = x[i];
  				len_left++;
  			}else{
  				right[i - half] = x[i];
  				len_right++;
  			}
  		}

  		
  		ordenarMergeSort(left, half);
  		if(len%2==0){
  			ordenarMergeSort(right, half);
  		}else{
  			ordenarMergeSort(right, half + 1);
  		}
  		

  		/*Combinar ambas mitades y guardarlo en temp */
  		combinar(left,len_left, right, len_right, temp);

      /*Copiar del array temporal al array resultado */
    	for (int k = 0; k < len; k++){
	 		x[k] = temp[k];
	  		cout<<x[k]<<" ";
		}
      cout<<endl;
    }
}



int main()
{
 	int n;
 	cin>>n;
 	int *x=new int[n];
 	for(int i=0;i<n;i++){
   		cin>>x[i];
 	}
 	ordenarMergeSort(x,n);
}

