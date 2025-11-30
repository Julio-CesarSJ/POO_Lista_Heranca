#ifndef POLIGONO_H
#define POLIGONO_H

#include <Forma.h>
#include <vector>

struct Ponto
{
    int x, y;
};

class Poligono : public Forma
{
    private:
    std::vector<Ponto> vertices;

    public:
    Poligono();
    ~Poligono();

    void adicionarVertice(struct Ponto p);

    void desenhar();

    void mover();

    double area();

    double perimetro();

    Poligono *clonar(Poligono *p);
};

#endif