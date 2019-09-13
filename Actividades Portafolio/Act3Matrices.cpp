//Gabriela Beatriz Solorzano Nuila 00185119

#include<iostream>
#include<stdlib.h>

using namespace std;

int **PMatrix,fil=10,col=20;

int main(){
	int a=0;
	
	PMatrix=new int*[fil];
	
	for(int x=0;x<fil;x++)
	   PMatrix[x]= new int[col];
	
	PMatrix[0][0]=100;
	cout<<"\n Direcciones de memoria\n"<<&PMatrix[0][0]<<"\n"<<&PMatrix[2][1]<<"\n"<<&PMatrix[5][1]<<"\n"<<&PMatrix[1][10]<<"\n"<<&PMatrix[2][10]<<"\n"<<&PMatrix[5][3]<<"\n"<<&PMatrix[9][19];

//a. Si, es valida	
	PMatrix[0][0]=*(*PMatrix);
	
	cout<<"\n"<<PMatrix[0][0]<<"\n";

//b. Con un for anidado
  /* No, no es valida la opcion
      for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(*(PMatrix))+(i+ *col +j)=a;
       	 a++;
	   }
	   a=0;
	}
 */  
 //c. Si, es valida la opcion y la mas práctica 
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

/*d. Si, es valida la opcion
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

/*e. Si, es valida
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
