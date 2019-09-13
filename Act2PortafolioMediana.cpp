//Gabriela Solorzano 00185119
//Mediana
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
	int op,i,j,k=0;
	for(k=0;k<tam;k++){
		cout<<"dar el valor "<<k+1<<": ";
		cin>>MEDI[k];
	}

	
   for(i=0;i<tam;i++)
       for(j=0;j<tam;j++)
       	 if(MEDI[j]>MEDI[j+1]){
       		op= MEDI[j];
       		MEDI[j]=MEDI[j+1];
       		MEDI[j+1]=op;
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
