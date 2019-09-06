//Gabriela Solorzano 00185119
//Ejercicio 18. Laboratorio
#include <iostream>
using namespace std;

int main (){
	int x;
	int y;
	int fila =0;
	int colum= 0;
	
	cout <<"ingrese el numero de filas para matriz: ";
	cin>> fila;
	cout <<"ingrese el numero de columns para matriz: ";
	cin>> colum;
	
	for (x= 0; x<=fila; x++){
		for (y=0;y<=colum; y++){
			if(x<=y){
				cout <<x<<y<<" ";
			}
			else{
				cout <<"00 ";
			}
		}cout<<endl;
	}
	return 0;
	}
	
	
