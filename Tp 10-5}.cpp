#include <iostream>
using namespace std;

double convertirMoneda(double cantidad, double tasa) {
    return cantidad * tasa; // Multiplicamos la cantidad por la tasa
}

int main() {
    double cantidad, tasaCompra, tasaVenta;
    int opcion;

    cout << "Seleccione el tipo de moneda a convertir:\n";
    
    cout << "1. Dolar (Compra: 955.5, Venta: 995.5)\n";
    
    cout << "2. Euro (Compra: 1059, Venta: 1119)\n";
    
    cout << "3. Real (Compra: 180.5, Venta: 190.5)\n";
    
    cout << "Opcion: ";
    
    cin >> opcion;

    cout << "Ingrese la cantidad a convertir: ";
    cin >> cantidad;

    if (opcion == 1) {
        cout << "Tasa de compra: 955.5, Tasa de venta: 995.5\n";
        cout << "Resultado (a pesos): " << convertirMoneda(cantidad, 955.5) << endl;
    } else if (opcion == 2) {
        cout << "Tasa de compra: 1059, Tasa de venta: 1119\n";
        cout << "Resultado (a pesos): " << convertirMoneda(cantidad, 1059) << endl;
    } else if (opcion == 3) {
        cout << "Tasa de compra: 180.5, Tasa de venta: 190.5\n";
        cout << "Resultado (a pesos): " << convertirMoneda(cantidad, 180.5) << endl;
    } else {
        cout << "Opción inválida.\n";
    }

    return 0;
}

