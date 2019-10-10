//Gabriela B Solorzano Nuila 00185119
#include<iostream>
using namespace std;

struct nodo{
int dato;
nodo *ant;
nodo *sig;


nodo *crear(nodo *cab, int d){
nodo *nuevo= new nodo;
nuevo->dato=d;
nuevo->ant=NULL;
nuevo->sig=NULL;
cab=nuevo;
return cab;
}
nodo *insertar(nodo *cab, int d){
nodo *nuevo= new nodo;
nuevo->dato=d;
nuevo->ant=NULL;
nuevo->sig=cab;
cab->ant=nuevo;
cab=nuevo;
return cab;
}

void mostrar(nodo *cab){
nodo *aux=cab;
while(aux !=NULL){
cout<<aux->dato<<endl;
aux=aux->sig;
}
}
void mostrar2(nodo *cab){
nodo *aux=cab;
while(aux->sig!=NULL){
aux=aux->sig;
}
while(aux !=NULL){
cout<<aux->dato<<endl;
aux=aux->ant;
}
}
};

int main(void){

nodo *cab=NULL;
nodo *p;
cab=p->crear(cab,7);
cab=p->insertar(cab,8);
cab=p->insertar(cab,9);
    cab=p->insertar(cab,3);
    cout<<"datos en la lista"<<endl;
p->mostrar(cab);
cout<<"datos inversos"<<endl;
p->mostrar2(cab);

return 0;
}
