//Gabriela B Solorzano Nuila 00185119
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;

	s.push(10);	
	s.push(9);	
	s.push(5);	
	s.push(7);	

	
	cout << "Tamanio " << s.size() << endl;
	
	cout<<"Sacando los 2 primeros: "<<endl;

	s.pop();	
	s.pop();	

	cout << "Tamanio actualizado: " << s.size() << endl;
	
	s.push(7);
	s.push(5);
	
	cout<<"Pila llena: "<<s.size()<<endl;

	
	if (s.empty())
		cout << "Pila vacia\n";
	else
		cout << "Pila NO vacia\n";
		
		cout << " elemento 2 es: " << s.top() << endl;

	return 0;
}
