// Ejercicio 2: Polimorfismo en accion
// Arreglo de punteros a Vehiculo que mezcla Autos y Motocicletas
#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
protected:
    string marca;
    string modelo;
    int velocidadMax;

public:
    Vehiculo(string marca, string modelo, int velocidadMax)
        : marca(marca), modelo(modelo), velocidadMax(velocidadMax) {}

    virtual void mostrarInfo() const {
        cout << "Vehiculo: " << marca << " " << modelo << endl;
    }

    virtual ~Vehiculo() {}
};

class Auto : public Vehiculo {
private:
    int numPuertas;

public:
    Auto(string marca, string modelo, int velocidadMax, int numPuertas)
        : Vehiculo(marca, modelo, velocidadMax), numPuertas(numPuertas) {}

    void mostrarInfo() const override {
        cout << "[Auto] " << marca << " " << modelo
             << " | " << velocidadMax << " km/h | " << numPuertas << " puertas" << endl;
    }
};

class Motocicleta : public Vehiculo {
private:
    int cilindrada;

public:
    Motocicleta(string marca, string modelo, int velocidadMax, int cilindrada)
        : Vehiculo(marca, modelo, velocidadMax), cilindrada(cilindrada) {}

    void mostrarInfo() const override {
        cout << "[Moto] " << marca << " " << modelo
             << " | " << velocidadMax << " km/h | " << cilindrada << " cc" << endl;
    }
};

int main() {
    cout << "=== Ejercicio 2: Polimorfismo ===" << endl;

    // Todos se guardan como Vehiculo*, pero cada uno conserva su tipo real
    const int N = 4;
    Vehiculo* flota[N] = {
        new Auto("Nissan", "Versa", 170, 4),
        new Motocicleta("Honda", "CB190R", 130, 184),
        new Auto("Volkswagen", "Jetta", 200, 4),
        new Motocicleta("Italika", "FT150", 95, 150)
    };

    // La misma llamada produce resultados distintos segun el objeto
    for (int i = 0; i < N; i++) {
        flota[i]->mostrarInfo();
    }

    // Liberar memoria
    for (int i = 0; i < N; i++) {
        delete flota[i];
    }

    return 0;
}
