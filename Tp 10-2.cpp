#include <iostream>
#include <cstdlib> 
#include <ctime>  
 
using namespace std;

int generarNumeroAleatorio(int minimo, int maximo)
 {
    return minimo + rand() % (maximo - minimo + 1);
}

int main() {
    int minimo, maximo;
    cout << "Ingrese el rango minimo: ";
     cin >> minimo;
     
     cout << "Ingrese el rango maximo: ";
     cin >> maximo;
    
    

    
    srand(time(0));

    int aleatorio = generarNumeroAleatorio(minimo, maximo);
    
    cout << "Numero aleatorio generado: " << aleatorio << endl;
    
    return 0;
}

