//Gabriela Beatriz Solorzano Nuila 00185119
#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};

class ListaS{
private:
    nodo *pInicio;
    
public:
    ListaS(void);
    void insertarInicioLista(int);
    void mostrarLista(void);
    void mostrarListaRec(void);
    void mostrarListaRec(nodo *);
    void mostrarPares(void);
    void mostrarImpares(void);
};

ListaS::ListaS(void) {
    pInicio = NULL;
}

void ListaS::insertarInicioLista(int dato) {
    nodo *nuevo;

    nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void ListaS::mostrarLista(void) {
    nodo *s = pInicio;

    while (s != NULL) {
        cout << s->dato << " ";
        s = s->sig;
    }
}

void ListaS::mostrarListaRec(void) {
    mostrarListaRec(pInicio);
}

void ListaS::mostrarListaRec(nodo *s) {
    if (s != NULL) {
        mostrarListaRec(s->sig);
        cout << s->dato << " ";
    }
}

void ListaS::mostrarPares(void){
    nodo *s = pInicio;
    
    while(s != NULL){
        if((s->dato)%2==0){
            cout << s->dato << " ";
        }
        s = s->sig;
    }
    
}

void ListaS::mostrarImpares(void){
    nodo *s = pInicio;
    
    while(s != NULL){
        if((s->dato)%2!=0){
            cout << s->dato << " ";
        }
        s = s->sig;
    }
    
}


int main(void)
{
    ListaS miLista;
    int dato, n, num;
    
    srand(time(NULL));
    num = rand();
    
    cout << "Cantidad de datos para la lista: ";
    cin >> n;
    for(int i=0;i<n;i++){
        dato = num=1+rand()%(101-1);
        miLista.insertarInicioLista(dato);
    }
    
    
    cout << "Mostrando lista: ";
    miLista.mostrarLista();
    cout << "\nMostrando lista invertida: ";
    miLista.mostrarListaRec();
    cout << "\nMostrando lista numeros pares: ";
    miLista.mostrarPares();
    cout << "\nMostrando lista numeros impares: ";
    miLista.mostrarImpares();
    
    return 0;
}

