//Gabriela Beatriz Solorzano Nuila 00185119 
#include <iostream>
#include <string>

using namespace std;

int arreglo[10];

int pos (int size, int *frnt, int *cnt) {

	if (arreglo[0]==0) {
		return 0;
	}
	else {
		(*cnt)++;
		cout << "Frente de la cola: " << *frnt << "^ cantidad de datos: " << *cnt<<endl;
		return ((*frnt)+*cnt)%size; 
	}

}



int main() {
	int front = 0;
	int size = 5;
	int cant = 0;

	arreglo[pos(5, &front, &cant)] = 1;
	arreglo[pos(5, &front, &cant)] = 2;
	arreglo[pos(5, &front, &cant)] = 3;
	arreglo[pos(5, &front, &cant)] = 4;
	arreglo[pos(5, &front, &cant)] = 5;

	remove();


	for (int i = 0; i < 10; i++) {
		cout << "arreglo [" << i << "]: " << arreglo[i]<< endl;
	}

	return 0;
}
