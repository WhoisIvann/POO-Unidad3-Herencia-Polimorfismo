// Ejercicio 3: Sobrecarga de operadores
// Clase Fraccion con operadores + y ==
#include <iostream>
using namespace std;

class Fraccion {
private:
    int numerador;
    int denominador;

public:
    Fraccion(int num = 0, int den = 1) : numerador(num), denominador(den) {
        if (denominador == 0) {
            cout << "Denominador 0 no valido, se usa 1" << endl;
            denominador = 1;
        }
    }

    // a/b + c/d = (a*d + c*b) / (b*d)
    Fraccion operator+(const Fraccion& otra) const {
        return Fraccion(numerador * otra.denominador + otra.numerador * denominador,
                        denominador * otra.denominador);
    }

    // a/b == c/d  si  a*d == c*b  (equivalentes, ej. 1/2 == 2/4)
    bool operator==(const Fraccion& otra) const {
        return numerador * otra.denominador == otra.numerador * denominador;
    }

    void mostrar() const {
        cout << numerador << "/" << denominador;
    }
};

int main() {
    cout << "=== Ejercicio 3: Sobrecarga de operadores ===" << endl;

    Fraccion f1(1, 2);
    Fraccion f2(1, 3);
    Fraccion f3(2, 4);

    Fraccion suma = f1 + f2;
    f1.mostrar(); cout << " + "; f2.mostrar(); cout << " = "; suma.mostrar(); cout << endl;

    f1.mostrar(); cout << " == "; f3.mostrar();
    cout << " ? " << (f1 == f3 ? "Si, son equivalentes" : "No son equivalentes") << endl;

    f1.mostrar(); cout << " == "; f2.mostrar();
    cout << " ? " << (f1 == f2 ? "Si, son equivalentes" : "No son equivalentes") << endl;

    return 0;
}
