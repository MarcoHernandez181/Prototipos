#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;

    float promedio;

public:
    // Constructor
    Estudiante(string nombre, float promedio);

    // Métodos para obtener datos (getters)
    string getNombre() const;
    float getPromedio() const;

    // Métodos para modificar datos (setters)
    void setNombre(string nuevoNombre);
    void setPromedio(float nuevoPromedio);

    // Método para mostrar información
    void mostrarInformacion() const;


};

#endif // ESTUDIANTE_H
