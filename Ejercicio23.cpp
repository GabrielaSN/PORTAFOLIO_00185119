// Gabriela Solorzano 00185119
//Ejercicio 23:Numeros complejos. Laboratorio
#include<iostream>
# include <stdlib.h>
using namespace std ;
 
void sumaDeComple ( int , int , int , int , int & , int & ) ;
 
int main ()
{
	int parteReal [ 3 ] ;
	int parteImag [ 3 ] ;
	int resulReal ;
	int resulImag ;
	char * numeros [] = { "Primer" , "Segundo" , "Tercer" } ;
 
	
	for ( int z = 0 ; z < 3 ; z ++ )
	{
	    cout << "\n Parte real del " << numeros [ z ] << " Numero : " ;
		cin >> parteReal [ z ] ;
		cout << "\n Parte imaginaria del " << numeros [ z ] << " Numero : " ;
		cin >> parteImag [ z ] ;
	}
	
	
	sumaDeComple ( parteReal [ 0 ] , parteImag [ 0 ] , parteReal [ 1 ] , parteImag [ 1 ] , resulReal , resulImag ) ;
 
	
	sumaDeComple ( resulReal , resulImag , parteReal [ 2 ] , parteImag [ 2 ] , resulReal , resulImag ) ;
 
	
	cout << "\n Resultado Parte Real : " << resulReal ;
	cout << "\n Resultado Parte Imaginaria : " << resulImag ;
	
 
 
	
	
	return 0 ;
}
 
void sumaDeComple ( int real1 , int imag1 , int real2 , int imag2 , int & rReal , int & rImag )
{
	rReal = real1 + real2 ;
	rImag = imag1 + imag2 ;
}
