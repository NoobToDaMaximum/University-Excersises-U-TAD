#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;


//Funcion recursiva que devuelve la raiz cuadrada
//de un numero con precision de 5 decimales
double Square(double n, double i, double j){
	double mid = (i + j) / 2;
	double mul = mid * mid;
	//si mid es la raiz cuadrada devolver mid
	if((mul == n) || (abs(mul-n) < 0.00001)){
		return mid;
	//si mull es menos que n, recur a la segunda parte
	}else if(mul < n){
		return Square(n,mid,j);
	//recur la primera parte
	}else{
		return Square(n,i,mid);
	}
}

//Funcion para encontrar la raiz cuadrada de n
void findSqrt(double n){
	double i = 1;
	//mientras la raiz no se encuentre
	bool found = false;
	while(!found){
		//Si n es un cuadrado perfecto
		if(i*i == n){
			cout << fixed << setprecision(0) << i;
			found = true;
		}else if (i * i > n){
			//La raiz caera en el intervalo de i-1 y i
			double res = Square(n,i-1,i);
			cout << fixed << setprecision(5) << res;
			found = true;
		}
		i++;
	}
}


int main(){
	double n;
	cin >> n;
	findSqrt(n);
	return 0;
}