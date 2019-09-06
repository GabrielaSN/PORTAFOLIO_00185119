// Gabriela Solorzano00185119 laboratorio
//Ejercicio 17: Solicite diez enteros al usuario, almacénelos en un arreglo y finalmente calcule su suma y promedio. Utilice el ciclo while para controlar el flujo del programa.

#include<iostream>
using namespace std;


int main(void){
	
	int arreglo[10];
	int z;
	cout << "Ingrese diez numeros: " << endl;
    for(z=0; z<10; z++){
        cout << "arreglo[" << z << "]: ";
        cin>>arreglo[z];
    }
    
    float suma=0;
    z=0;
    int n=10;
    float promedio=0;
    
    while(z<10){
	suma=suma+arreglo[z];
	z++;
	
	
	promedio=suma/n;
	
	
	}
	
	cout<<"La sumatoria del arreglo es: "<<suma<<endl;
	
	cout<<"El promedio es: "<<promedio<<endl;
	
	return 0;
	
}
