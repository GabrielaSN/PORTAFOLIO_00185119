//Gabriela Beatriz Solorzano Nuila 00185119

#include <iostream>
using namespace std;


int main() {

	int g = 0;
	int sum = 0;

	cout << "Digite un numero ";
	cin >> g;

	for (int i = 0; i <= g; i++) {
		sum = sum + i;
	}
	cout << sum;

	return 0;

}
