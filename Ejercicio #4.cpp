// Ejercicio #4

#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int edad1, edad2, edad3;
    
    cout << "Ingrese la edad del primer hijo: ";
    cin >> edad1;
    
    cout << "Ingrese la edad del segundo hijo: ";
    cin >> edad2;
    
    cout << "Ingrese la edad del tercer hijo: ";
    cin >> edad3;
    
    double mediaEdades = (edad1 + edad2 + edad3) / 3.0;
    cout << endl;
    cout << setw(15) << "Hijo" << setw(15) << "Edad" << setw(15) << "Media" << endl;
    
    cout << setw(15) << "Primer Hijo" << setw(15) << edad1 << setw(15) << mediaEdades << endl;
    cout << setw(15) << "Segundo Hijo" << setw(15) << edad2 << setw(15) << mediaEdades << endl;
    cout << setw(15) << "Tercer Hijo" << setw(15) << edad3 << setw(15) << mediaEdades << endl;
    
    return 0;
}
