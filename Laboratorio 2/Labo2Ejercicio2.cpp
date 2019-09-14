//Gabriela Beatriz Solorzano Nuila 00185119.
#include<iostream>

using namespace std;

int raiz(int num, int z){
	if(num==1){	
		return 1;
	}else{
	float x= ((num/z)+z)/2;
	float y= ((num/x)+x)/2;
	
	while ((x-y)>0.0001){
	x= ((num/y)+y)/2;
	y= ((num/x)+x)/2;
	}
	return y;
	}
}


int main(){
    int numero;
    
	cout<<"Ingrese un numero:"<<endl;
	cin>>numero;

   	float z= raiz(numero,1);
   	
  cout<< "El Resultado es:" << z <<endl;
  
  return 0;
}
