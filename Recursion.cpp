//Gabriela Solorzano 00185119

#include <iostream>
using namespace std;

int mult(int x, int b){
	if(b==1){
		cout << "b=" << b << " caso base" << endl;
		return 1;
	}else{
		return x + x*(b-1);
	}
	
	
}int main(){
	
	int x=0;
	int b=0;
	
	cout << "Ingrese el valor de x: "<< endl;
	cin >> x;
	
	cout << "Ingrese el valor de b: "<< endl;
	cin >> b;
	
		int r = mult(x,b);
		cout << "Resultado de la multiplicacion de "<< x << " por " << b << " es: " << r << endl;


return 0;
}
