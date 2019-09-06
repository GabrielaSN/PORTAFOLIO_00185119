//Gabriela Beatriz Solorzano Nuila 00185119

#include<iostream>
#include<stdlib.h>

using namespace std;

int **PMatrix,fil=10,col=20;

int main(){
	int a=0;
	
	PMatrix=new int*[fil];
	
	for(int i=0;i<fil;i++)
	   PMatrix[i]= new int[col];
	
	PMatrix[0][0]=100;
	cout<<"\n Direcciones de memoria\n"<<&PMatrix[0][0]<<"\n"<<&PMatrix[2][1]<<"\n"<<&PMatrix[5][1]<<"\n"<<&PMatrix[1][10]<<"\n"<<&PMatrix[2][10]<<"\n"<<&PMatrix[5][3]<<"\n"<<&PMatrix[9][19];


	PMatrix[0][0]=*(*PMatrix);

	cout<<"\n"<<PMatrix[0][0]<<"\n";

// for anidado
  /* No es valida la opcion
      for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(*(PMatrix))+(i+ *col +j)=a;
       	 a++;
	   }
	   a=0;
	}
 */  
 //si es valida la opcion y es la mejor 
 /*
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(*(PMatrix+i)+j)=a;
       	 a++;
	   }
	   a=0;
	}
		for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<*(*(PMatrix+i)+j)<<"]";	
		}
		cout<<"\n";	
	}
*/

/*si es valida la opcion
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(PMatrix[i]+j)=a;
       	 a++;
	   }
	   a=0;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<*(PMatrix[i]+j)<<"]";	
		}
		cout<<"\n";	
	}
*/

/*si es valida la opcion
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 (*(PMatrix+i))[j]=a;
       	 a++;
	   }
	   a=0;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<(*(PMatrix+i))[j]<<"]";	
		}
		cout<<"\n";
    }
*/
	
	return 0;
}
