//Gabriela Beatriz Solorzano Nuila 00185119

#include <iostream>
using namespace std;

int buscar(int x, int low, int high, int *arreglo){

	if(	low>high){
		return (-1);
	}	
	
	int mid=(low + high)/2;
		
	if(x== arreglo[mid])
	return mid;
	
	if(x< arreglo[mid]){
		return buscar(x, low, mid-1, arreglo);
	}else{
		return buscar(x, mid+1, high, arreglo);
	}
}

int main(void){
	int size=8;
int arreglo[8]={1,3,4,5,17,18,31,33};
int low=0;
int high=size-1;

int x = 0;
cout<<"Ingrese numero: ";
cin>>x;
int y = buscar(x, low, high, arreglo);

if(y==-1){
	cout<<"Elemento no encontrado";
}
else{
	cout<<"El elemento se encuentra en la casilla: "<<y;
}


}
