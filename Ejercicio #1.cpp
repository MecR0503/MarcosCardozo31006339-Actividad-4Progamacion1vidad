
/*Ejercicio #1: */ 

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int n1, n2, n3;
  
  cout << "Ingresa el primer numero: " << endl;
  cin  >> n1;
  
    cout << "Ingresa el segundo numero: " << endl;
  cin  >> n2;
  
    cout << "Ingresa el tercer numero: " << endl;
  cin  >> n3;
  
  if ( (n1 < n2) && (n2 < n3) ){
  	cout << "Los numeros ingresados estan en orden numerico";
  }
  else {
  	cout << "Los numeros ingresados no estan en orden numerico";
  }

	return 0;
}
