#include <iostream>
using namespace std;

/*Comprueba de que multiplos esta hecho el numero, y añade 1 en la posicion correspondiente del
array cada vez que hay uno.*/
void Exchange(int n){
	double sol[8] = {0,0,0,0,0,0,0,0};
		if (n >= 0){
			while (n >= 500){
				n -= 500;
				sol[0]++;
			}
			while (n >= 200){
				n -= 200;
				sol[1]++;
			}

			while (n >= 100){
				n -= 100;
				sol[2]++;
			}

			while (n >= 50){
				n -= 50;
				sol[3]++;
			}

			while (n >= 25){
				n -= 25;
				sol[4]++;
			}

			while (n >= 10){
				n -= 10;
				sol[5]++;
			}

			while (n >= 5){
				n -= 5;
				sol[6]++;
			}

			while (n >= 1){
				n -= 1;
				sol[7]++;
			}
			for(int i = 0; i < 8; i++){
				cout << sol[i] << ' ';
				sol[i]=0;
			}
		}cout<<endl;
}

int main(){
	int n;
	do{
		cin>>n;
		Exchange(n);
	}while(n >= 0);
	return 0;
}