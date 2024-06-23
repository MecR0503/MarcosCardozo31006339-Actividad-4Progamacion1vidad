//Ejercicio #2

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double limiteMaximo, base;
    
    cout << "Ingrese el limite maximo: " << endl;
    cin >> limiteMaximo;
    
    cout << "Ingrese la base: " << endl;
    cin >> base;
    
    int exponente = 1;
    int potencia = 0;
     
     
    while (potencia < limiteMaximo) {
        cout << "Resultado de " << base << "^" << exponente << " = " << potencia << endl;
        
        exponente++;
        potencia = pow (base, exponente);
    }
    
    return 0;
}
