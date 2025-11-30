#ifndef FORMA_H
#define FORMA_H

class Forma
{
    public:
    Forma();
    virtual ~Forma();

    virtual void desenhar() = 0;

    virtual void mover() = 0;

    virtual double area() = 0;

    virtual double perimetro() = 0;

    //virtual void clonar() = 0;
};

#endif