#ifndef Circulo_H
#define Circulo_H

#include <Forma.h>

class Circulo : public Forma
{
    private:
    double raio;
    int centroX, centroY;

    public:
    Circulo(double r, int cx, int cy);
    ~Circulo();

    void desenhar();

    void mover();

    double area();

    double perimetro();

    Circulo *clonar(Circulo *c);

    void validarCirculo();
};

#endif