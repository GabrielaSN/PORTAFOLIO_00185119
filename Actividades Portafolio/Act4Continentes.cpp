//Gabriela Beatriz Solorzano Nuila 00185119

#include <iostream>
using namespace std;

struct paisesContA{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContAsia[5];

struct paisesContB{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContAme[5];

struct paisesContC{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContAfr[5];

struct paisesContD{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContEu[5];

struct paisesContF{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContOce[5];

int main(){
	
	// Ingresando datos
	
	cout<< "Continente Asiatico" << endl;
	
	for(int x=0; x<5; x++){
		cout << "Ingrese el nombre del pais N-" << x+1 << ":" << endl;
		cin >> ContAsia[x].nombre;
		cout<<"Ingrese el nombre de la capital del pais N-" << x+1 << ":" << endl;
		cin >> ContAsia[x].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << x+1 << ":" << endl;
		cin >> ContAsia[x].habitantes;
	}
	
	cout << "Continente Americano"<< endl;
	
	for(int x=0; x<5; x++){
		cout<< "Ingrese el nombre del pais N-" << x+1 << ":" << endl;
		cin >> ContAme[x].nombre;
		cout<< "Ingrese el nombre de la capital del pais N-" << x+1 << ":" << endl;
		cin >> ContAme[x].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << x+1<< ":" << endl;
		cin >> ContAme[x].habitantes;
	}
	cout << "Continente Africano"<< endl;
	
	for(int x=0; x<5; x++){
		cout<< "Ingrese el nombre del pais N-" << x+1 << ":" << endl;
		cin >> ContAfr[x].nombre;
		cout<< "Ingrese el nombre de la capital del pais N-" << x+1 << ":" << endl;
		cin >> ContAfr[x].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << x+1<< ":" << endl;
		cin >> ContAfr[x].habitantes;
	}
	
	cout << "Continente Oceanico"<< endl;
	
	for(int x=0; x<5; x++){
		cout<< "Ingrese el nombre del pais N-" << x+1 << ":" << endl;
		cin >> ContOce[x].nombre;
		cout<< "Ingrese el nombre de la capital del pais N-" << x+1 << ":" << endl;
		cin >> ContOce[x].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << x+1<< ":" << endl;
		cin >> ContOce[x].habitantes;
	}
	cout << "Continente Europeo"<< endl;
	
	for(int x=0; x<5; x++){
		cout<< "Ingrese el nombre del pais N-" << x+1 << ":" << endl;
		cin >> ContEu[x].nombre;
		cout<< "Ingrese el nombre de la capital del pais N-" << x+1 << ":" << endl;
		cin >> ContEu[x].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << x+1<< ":" << endl;
		cin >> ContEu[x].habitantes;
	}
		
	system("PAUSE");
	
int pob1=0,  pob2=0, pob3=0, pob4=0,  pob5=0; {
	pob1=ContAme[0].habitantes + ContAme[1].habitantes+ContAme[2].habitantes + ContAme[3].habitantes+ContAme[4].habitantes;
	
	pob2=ContEu[0].habitantes+ ContEu[1].habitantes+ContEu[2].habitantes+ ContEu[3].habitantes+ContEu[4].habitantes;
	
	pob3=ContOce[0].habitantes+ ContOce[1].habitantes+ContOce[2].habitantes+ ContOce[3].habitantes+ContOce[4].habitantes;
	
	pob4=ContAsia[0].habitantes+ ContAsia[1].habitantes+ContAsia[2].habitantes + ContAsia[3].habitantes+ContAsia[4].habitantes;

pob5=ContAfr[0].habitantes+ ContAfr[1].habitantes+ContAfr[2].habitantes+ ContAfr[3].habitantes+ContAfr[4].habitantes;
}
cout<<"Poblacion de cada continente: "<<endl;
cout<<"Continente Africano: "<<pob5<<" habitantes"<<endl;
cout<<"Continente Americano: "<<pob1<<" habitantes"<<endl;
cout<<"Continente Asiatico: "<<pob4<<" habitantes"<<endl;
cout<<"Continente Oceanico: "<<pob3<<" habitantes"<<endl;
cout<<"Continente Europeo: "<<pob2<<" habitantes"<<endl;
cout<<endl;
		
return 0;
}
