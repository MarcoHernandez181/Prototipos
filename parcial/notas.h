#ifndef NOTAS_H
#define NOTAS_H
#include <string>
#include "estudiante.h"

//clase hija,atributos y metodos
class Notas : public Estudiante
{
    public:
        Notas( float _notaFinal, float _primerParcial, float _segundoParcial);
        void mostrar();


    private:
        float notaFinal;
        float primerParcial;
        float segundoParcial;
};

#endif // NOTAS_H
