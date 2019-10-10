#include<iostream>
using namespace std;

void recursividad(int m, int n);


int main(void){

int cont;
int contador=0;

cout<<"Ingrese elementos: ";
cin>>cont;

recursividad(cont, contador);


return 0;	
}

void recursividad(int m, int n){
	
	n++;
	
	if(m==n){
		cout<<n;
	}
	
	else{
		cout<<n;
		recursividad(m,n);
		cout<<n;
	}
	
}
