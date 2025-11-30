#include <Retangulo.h>
#include <iostream>

Retangulo::Retangulo(double a, double l, int cx, int cy) :
altura(std::move(a)), largura(std::move(l)), cantoX(std::move(cx)), cantoY(std::move(cy))
{
    std::cout << "Retângulo criado!\n";
}

Retangulo::~Retangulo()
{
    std::cout << "Retângulo destruido!\n";
}

void Retangulo::desenhar() 
{
    std::cout << "\n== Desenhando Retângulo ==\n";
}

void Retangulo::mover() 
{
    std::cout << "\n== Movendo Retângulo ==\n";
}

double Retangulo::area() 
{
    double area;

    area = altura * largura;

    return area;
}

double Retangulo::perimetro() 
{
    double perimetro;

    perimetro = 2 * (altura + largura);

    return perimetro;
}

Retangulo *Retangulo::clonar(Retangulo *r) 
{
    Retangulo *clone = r;

    std::cout << "\nRetângulo clonado!\n";

    return clone;
}