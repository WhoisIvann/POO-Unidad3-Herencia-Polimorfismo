// Ejercicio 5: Coleccion con iterador
// vector de Vehiculo* recorrido con un iterador de la STL
#include <iostream>
#include <string>
#include <vector>
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
    cout << "=== Ejercicio 5: Coleccion con iterador ===" << endl;

    vector<Vehiculo*> garage;
    garage.push_back(new Auto("Mazda", "3", 210, 4));
    garage.push_back(new Motocicleta("Suzuki", "GSX-R150", 140, 147));
    garage.push_back(new Auto("Chevrolet", "Aveo", 175, 4));
    garage.push_back(new Motocicleta("Kawasaki", "Ninja 400", 190, 399));

    // Recorrido con iterador explicito
    int n = 1;
    for (vector<Vehiculo*>::iterator it = garage.begin(); it != garage.end(); ++it) {
        cout << n++ << ". ";
        (*it)->mostrarInfo();
    }

    // Liberar memoria
    for (vector<Vehiculo*>::iterator it = garage.begin(); it != garage.end(); ++it) {
        delete *it;
    }
    garage.clear();

    return 0;
}
