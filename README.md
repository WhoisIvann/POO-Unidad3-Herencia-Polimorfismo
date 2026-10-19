# Unidad 3: Herencia, Polimorfismo y Sobrecarga (C++)

**Materia:** Programación Orientada a Objetos
**Alumno:** Julio Ivan Gomez Denis — Ingeniería de Software y Minería de Datos, UAG Campus Tabasco

Cinco ejercicios que van de una jerarquía simple de clases hasta recorrer una colección polimórfica con un iterador.

## Estructura del repositorio

```
POO-Unidad3-Herencia-Polimorfismo/
├── ejercicio1_jerarquia/       Vehiculo, Auto y Motocicleta con mostrarInfo() sobrescrito
├── ejercicio2_polimorfismo/    Arreglo de Vehiculo* que mezcla autos y motos
├── ejercicio3_fraccion/        Clase Fraccion con sobrecarga de + y ==
├── ejercicio4_calculadora/     Clase Calculadora con tres versiones de sumar()
├── ejercicio5_iterador/        vector<Vehiculo*> recorrido con un iterador de la STL
└── README.md
```

Cada carpeta contiene el código fuente (`.cpp`) y la captura de su ejecución (`captura_ejercicioN.png`).

## Ejercicios

| # | Tema | Concepto clave |
|---|------|----------------|
| 1 | Jerarquía simple | Herencia pública, atributos `protected`, constructor de la clase base en la lista de inicialización |
| 2 | Polimorfismo en acción | Métodos `virtual`, punteros a la clase base, destructor virtual |
| 3 | Sobrecarga de operadores | `operator+` y `operator==` (equivalencia por productos cruzados) |
| 4 | Sobrecarga de métodos | Mismo nombre, distinta firma; el compilador elige según los argumentos |
| 5 | Colección con iterador | `std::vector`, `vector<Vehiculo*>::iterator`, liberación de memoria |

## Compilar y ejecutar

Requiere un compilador con C++11 o superior (g++, MinGW o Visual Studio).

```bash
cd ejercicio1_jerarquia
g++ -std=c++11 ejercicio1_jerarquia.cpp -o ejercicio1
./ejercicio1
```

Se hace igual con los demás ejercicios, cambiando el nombre de la carpeta y del archivo.
