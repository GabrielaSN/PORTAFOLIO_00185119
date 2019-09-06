//Gabriela Solorzano 00185119
//ejercicio 12. Laboratorio
#include <iostream>

using namespace std;

int main(){

  int n, restar,num_invert=0;
  
  cout<< "Ingrese un numero:"; 
  cin>> n;
  
  
while(n>0){
    restar = n % 10;
    n = n / 10;
    num_invert=num_invert*10+restar;
}
cout<<"Resultado es:"<<num_invert;

return 0;  
}
