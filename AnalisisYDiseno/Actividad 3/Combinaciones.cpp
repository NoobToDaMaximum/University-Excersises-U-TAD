#include <iostream>
using namespace std;

//Funcion que calcula el factorial
int fact(int n){
	//factorial de 0 o 1 es 1
	if(n==0 || n==1){
		return 1;
	}else{
	//multiplica n * (n-1)
		return n * fact(n-1);
	}
}

int main(){
	int n, r, result;
	cin >> n;
	cin >> r;
	//Hace la formula para el numero combinatorio
	result = fact(n) / (fact(r) * fact(n-r));
	return 0;
}