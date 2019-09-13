//Gabriela Beatriz Solorzano Nuila 00185119

#include <iostream>
using namespace std;

int mult(int x, int y){
	if(y==1){
		cout << "y=" << y << " caso base" << endl;
		return 1;
	}else{
		return x + x*(y-1);
	}
	
	
}int main(){
	
	int x=0;
	int y=0;
	
	cout << "Ingrese el valor de x: "<< endl;
	cin >> x;
	
	cout << "Ingrese el valor de y: "<< endl;
	cin >> y;
	
		int r = mult(x,y);
		cout << "Resultado de la multiplicacion de "<< x << " por " << y << " es: " << r << endl;


return 0;
}
