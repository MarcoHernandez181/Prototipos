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

    // M�todos para obtener datos (getters)
    string getNombre() const;
    float getPromedio() const;

    // M�todos para modificar datos (setters)
    void setNombre(string nuevoNombre);
    void setPromedio(float nuevoPromedio);

    // M�todo para mostrar informaci�n
    void mostrarInformacion() const;


};

#endif // ESTUDIANTE_H
