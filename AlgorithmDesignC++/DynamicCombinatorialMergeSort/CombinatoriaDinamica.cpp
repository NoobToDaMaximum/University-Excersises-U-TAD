#include<iostream>
 
using namespace std;
 
//Calculo del Numero combinatorio
int CalcCombination(int n, int r)
{
	if(r==0||n==r)
		return 1;
	return CalcCombination(n-1,r-1) + CalcCombination(n-1,r);
}

//Crea el trianglo y lo guarda en un vector unidimensional usando CalcCOmbination
void pascalsTriangle(int n, int k[]){
	for(int i = 0; i < n; i++){
			//printf("Chupame el pito");
		for(int j = 0; j < (i + 1); j++){
				//printf("Chupame el pito2");
			k[(10*i)+j] = CalcCombination(i,j);
		}
	}
}

int main()
{
	int triangle[100];
	int n, r;
	pascalsTriangle(10, triangle);
	//Ifs de seleccion
	do{
		cin >> n;
		cin >> r;

		if(n < 0 || r < 0){
			break;
		}else if(n < r || n > 9 || r > 9){
			cout<<"ERROR"<<endl;
		}else if(n >= 0 && r >= 0){
			cout<<triangle[(10*n)+r];
		}
		cout<<endl;
	}while(n >= 0 || r >= 0);

	return 0;
}