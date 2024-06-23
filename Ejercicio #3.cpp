// Ejercicio #3

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int nota1, nota2, nota3, nota4;
    
    cout << "Ingrese la nota 1: " << endl;
    cin >> nota1;
    
    cout << "Ingrese la nota 2: " << endl;
    cin >> nota2;
    
    cout << "Ingrese la nota 3: " << endl;
    cin >> nota3;
    
    cout << "Ingrese la nota 4: " << endl;
    cin >> nota4;
    
    double media1 = static_cast<double>(nota1) / 4;
    double media2 = static_cast<double>(nota2) / 4;
    double media3 = static_cast<double>(nota3) / 4;
    double media4 = static_cast<double>(nota4) / 4;
    
    cout << endl;
    cout << setw(10) << "Nota" << setw(10) << "Media" << endl;
    
    cout << setw(10) << nota1 << setw(10) << media1 << endl;
    cout << setw(10) << nota2 << setw(10) << media2 << endl;
    cout << setw(10) << nota3 << setw(10) << media3 << endl;
    cout << setw(10) << nota4 << setw(10) << media4 << endl;
    
    return 0;
}
