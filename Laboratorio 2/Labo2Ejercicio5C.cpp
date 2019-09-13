//Gabriela Beatriz Solorzano Nuila 00185119

#include <iostream>
using namespace std;

void color(int numb, char* desde, char* hasta);

void tower(int a, char* desde, char* auxiliar, char* hasta);


void color(int numb, char* desde, char* hasta) {

	char* array[] = { "", "Azul", "Verde", "Amarillo", "Naranja", "Rojo" };

	cout << "\t\tStep " << ++counter;

	cout << ": Movimiento " << array[numb] << " de " << desde << " a " << hasta << "\n";
}


void tower(int a, char* desde, char* auxiliar, char* hasta) {
	if (a == 1) {
		color(1, desde, hasta);
	}
	else {
		tower(a - 1, desde, hasta, auxiliar);
		color(a, desde, hasta);
		tower(a - 1, auxiliar, desde, hasta);
	}
}

int main() {

	int counter = 0;
	int n;

	cout << "La Torre Hanoi: " << endl;
	cout << "Numero de discos: ";
	cin >> n;
	cout << "endl";
	tower(n, "Nuevo", "Auxiliar", "Final");

	return 0;
}



