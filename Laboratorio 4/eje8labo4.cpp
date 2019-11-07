//Gabriela Beatriz Solorzano Nuila 00185119
#include <string>
#include <iostream>

using namespace std;

int main()
{
    cout << "Ingrese un numero positivo que sea entero: ";
    int num;
    string cad = "";
    cin >> num;
    if(num > 0){
        while(num>0){
           if(num%2 == 0)
                cad = "0" + cad;
            else
                cad = "1" + cad;
                num = num/2;
        }
        cout <<"Numero en binario: " <<cad;
    }
    else{
        if(num == 0)
            cout << "0";
        else
            cout << "Solo numeros mayores que cero";
    }
    return 0;
}
