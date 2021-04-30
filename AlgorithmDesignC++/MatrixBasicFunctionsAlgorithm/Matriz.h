#ifndef MATRIZ_H
#define MATRIZ_H

using namespace std;

class Matriz {
	private:
  	double **matriz;
  
  	int n_filas;
  	int n_columnas;

	public:
 
 /*Es el contructor por defecto, inicializa las variables a cero y el puntero matriz a null
 */

		Matriz();

/*Constructor por parametros, inicializa las variables y asigna memoria de forma dinamica a la matriz.
*/

		Matriz(int n_filas, int n_columnas);

/*Contructor que recibe como parametro una matriz y la copia
*/

		Matriz(const Matriz &obj);

/*Destructor, libera memoria reservada para la matriz dinamica
*/

		~Matriz();

/*Suma dos objetos matrices y la asigna a una nueva matriz
*/

		Matriz& operator+(const Matriz &m);

/*Resta la matriz b a la a, y la asigna a una matriz c
*/

		Matriz& operator-(const Matriz &m);

/*Multiplica una matriz definida ateriormente por un escalar
*/

		Matriz& operator*(double scalar);

/*Multiplica dos matrices a*b y lo asigna a una tercera matric c
*/


		Matriz& operator*(const Matriz &m);

/*Calcula la traspuesta de la matriz a
*/


		Matriz& calcularTraspuesta();

/*Determina si la matriz a es simetrica o no
*/

		bool esSimetrica();

/*Obtiene el valor maximo de la matrz a
*/

		double obtenerMaximo();

/*Obtiene el valor minimo de la matrz a
*/

		double obtenerMinimo();

/* Realiza la asignación entre dos objetos de la clase Matriz. Crea una nueva matriz  con el resultado.
	   Parámetro: la matriz que se va a asignar
	   Retorno: una nueva matriz con la matriz pasada como parámetro.
	   Precondicion: Ninguno.
	   Complejidad Temporal: O(n_filas*n_columnas)
	   Complejidad Espacial: O(n_filas*n_columnas)


*/
	
	Matriz& operator= (const Matriz &m);


/* Permite rellenar todos los elementos de la matriz del objeto actual preguntando al usuario 
	   Parámetro: Ninguno
	   Retorno: Ninguno
	   Precondicion: La matriz no debe estar vacía
	   Complejidad Temporal: O(n_filas*n_columnas)
	   Complejidad Espacial: O(1)


*/
  
  	void rellenarManual();


/* Permite rellenar todos los elementos de la matriz del objeto actual de forma aleatoria 
	   Parámetro: semilla que se utiliza para el generador aleatorio
	   Retorno: Ninguno
	   Precondicion: La matriz no debe estar vacía
	   Complejidad Temporal: O(n_filas*n_columnas)
	   Complejidad Espacial: O(1)


*/

  	void rellenarAleatorio(long seed);



/* Imprime por pantalla todos los elementos de la matriz del objeto actual  
	   Parámetro: Ninguno
	   Retorno: Ninguno
	   Precondicion: La matriz no debe estar vacía
	   Complejidad Temporal: O(n_filas*n_columnas)
	   Complejidad Espacial: O(1)


*/

  	void mostrarMatriz();
  
};

#endif // MATRIZ_H
