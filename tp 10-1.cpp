#include <iostream>
using namespace std;

int encontrarMayor(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
   

    int mayor = encontrarMayor(num1, num2, num3);
    cout << "El numero mayor es: " << mayor << endl;
    
    return 0;
}

