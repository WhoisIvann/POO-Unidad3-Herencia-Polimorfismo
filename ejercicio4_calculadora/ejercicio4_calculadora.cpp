// Ejercicio 4: Sobrecarga de metodos
// Clase Calculadora con tres versiones de sumar()
#include <iostream>
using namespace std;

class Calculadora {
public:
    int sumar(int a, int b) {
        return a + b;
    }

    int sumar(int a, int b, int c) {
        return a + b + c;
    }

    double sumar(double a, double b) {
        return a + b;
    }
};

int main() {
    cout << "=== Ejercicio 4: Sobrecarga de metodos ===" << endl;

    Calculadora calc;

    // El compilador elige la version segun el numero y tipo de argumentos
    cout << "sumar(5, 7)        = " << calc.sumar(5, 7) << endl;
    cout << "sumar(1, 2, 3)     = " << calc.sumar(1, 2, 3) << endl;
    cout << "sumar(2.5, 3.75)   = " << calc.sumar(2.5, 3.75) << endl;

    return 0;
}
