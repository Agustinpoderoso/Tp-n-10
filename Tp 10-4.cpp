#include <iostream>
using namespace std;

bool esNumeroPrimo(int numero) {
    if (numero < 2) return false; 

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 1) {
            return false; 
            
        }
    }
    return true; 
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esNumeroPrimo(numero)) {
    	
        cout << numero << " es un numero primo." << endl;
    } else {
    	
        cout << numero << " no es un numero primo." << endl;
    }
    return 0;
}

