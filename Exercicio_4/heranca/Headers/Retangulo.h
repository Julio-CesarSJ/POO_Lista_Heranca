#ifndef Retangulo_H
#define Retangulo_H

#include <Forma.h>

class Retangulo : public Forma
{
    private:
    double altura, largura;
    int cantoX, cantoY;

    public:
    Retangulo(double a, double l, int cx, int cy);
    ~Retangulo();

    void desenhar();

    void mover();

    double area();

    double perimetro();

    Retangulo *clonar(Retangulo *r);
};

#endif