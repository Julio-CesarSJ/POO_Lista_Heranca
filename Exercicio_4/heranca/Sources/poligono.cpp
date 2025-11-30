#include <Poligono.h>
#include <iostream>

Poligono::Poligono()
{
    std::cout << "Poligono criado!\n";
}

Poligono::~Poligono()
{
    std::cout << "Poligono destruido!\n";
}

void Poligono::adicionarVertice(struct Ponto p)
{
    vertices.push_back(p);
}

void Poligono::desenhar() 
{
    std::cout << "\n== Desenhando Polígono ==\n";
}

void Poligono::mover() 
{
    std::cout << "\n== Movendo Polígono ==\n";
}

double Poligono::area() 
{
    double area;

    return area;
}

double Poligono::perimetro() 
{
    double perimetro;

    

    return perimetro;
}

Poligono *Poligono::clonar(Poligono *r) 
{
    Poligono *clone;

    std::cout << "\nPolígono clonado!\n";
    
    return clone;
}