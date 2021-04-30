#include <iostream>
using namespace std;

/*Resuelve el laberinto
Complejidad de O(nlogn) creo y espacial del tamaño del laberinto O(n)*/
int solveMaze(int pos, char* lab){
	int r = -1;

	if(lab[pos] == 'T'){
		r=pos;
	}else if(lab[pos] == '.'){
		lab[pos] = 'X';
		//Comporbamos la posicion de arriba
		if(pos > 9){
			r = solveMaze(pos-10, lab);
		}
		//Comporbamos la posicion de la derecha
		if(r == -1 && pos%10 != 9){
			r = solveMaze(pos + 1, lab);
		}
		//Comprobamos la posicion de abajo
		if(r == -1 && pos < 90){
			r = solveMaze(pos +10, lab);
		}
		//Comprobamos la posicion de la izquierda
		if(r == -1 && pos%10 != 0){
			r = solveMaze(pos-1, lab);
		}
		if(r == -1){
			lab[pos] = '.';
		}
	}
	return r;
}

int main (){
	char lab[100];

	for(int i = 0; i < 100; i++){
		cin >> lab[i];
	}

	int res = solveMaze(0, lab);

	if(res != -1){
		for(int i = 0; i < 100; i++){
			if(i%10 == 0){
				cout << endl;
			}
			cout << lab[i];
		}
		cout << endl << "ENCONTRADO " << res/10 << " " << res%10;
	}else{
		cout << "INALCANZABLE";
	}
}