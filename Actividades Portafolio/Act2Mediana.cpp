//Gabriela Beatriz Solorzano Nuila 00185119

#include<iostream>
using namespace std;


  void DatosOrdenados(int MEDI[],int);
  int G(int MEDI[],int);
  
int main(){
  
  int TAM=0;
  cout<<" Valores a ser usados: "<<endl; cin>>TAM;
  int MEDI[TAM]; 

  DatosOrdenados(MEDI,TAM);

  cout<<endl<<"La mediana es: "<<G(MEDI,TAM);	
 
 
	return 0;
}

void DatosOrdenados(int MEDI[],int tam){
	int op,x,y,k=0;
	for(k=0;k<tam;k++){
		cout<<"dar el valor "<<k+1<<": ";
		cin>>MEDI[k];
	}

	
   for(x=0;x<tam;x++)
       for(y=0;y<tam;y++)
       	 if(MEDI[y]>MEDI[y+1]){
       		op= MEDI[y];
       		MEDI[y]=MEDI[y+1];
       		MEDI[y+1]=op;
		   }		   	

}

int G(int MEDI[],int tam){
	int med=0,aux=0,aux2=0,aux3=0;

	if(tam%2==0){
		aux2=(tam/2);
		aux3=(tam/2)+1;
		aux=(MEDI[aux2-1]+MEDI[aux3-1])/2;
	
		
	 return aux;
	} else{
	  aux=(tam+1)/2	;
	  med=MEDI[aux];
	  
      return med;	
	}
	
}
