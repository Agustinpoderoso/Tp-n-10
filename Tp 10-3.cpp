#include <iostream>
using namespace std;

int calcularPotencia(int base, int exponente) {
    int resultado = 1; 
    
    for (int i = 1; i <= exponente; i++) {
    	
        resultado *= base; 
    }
    return resultado;
}

int main() {
    int base, exponente;
    
    cout << "Ingrese la base: ";
    cin >> base;
    
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    int potencia = calcularPotencia(base, exponente);
    
    cout << base << " elevado a " << exponente << " es: " << potencia << endl;
    
    return 0;
}

