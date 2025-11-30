#include <Circulo.h>
#include <iostream>
#include <cmath>

Circulo::Circulo(double r, int cx, int cy) : 
raio(std::move(r)), centroX(std::move(cx)), centroY(std::move(cy))
{
    std::cout << "Círculo criado!\n";
}

Circulo::~Circulo()
{
    std::cout << "Círculo destruido!\n";
}

void Circulo::validarCirculo()
{
    if(raio <= 0)
    {
        std::cout << "Círculo Inválido! raio menor ou igual a 0\n";
    }
    else
    {
        std::cout << "Círculo Válido!\n";
    }
}

void Circulo::desenhar() 
{
    std::cout << "\n== Desenhando Círculo ==\n";
}

void Circulo::mover() 
{
    std::cout << "\n== Movendo Círculo ==\n";
}

double Circulo::area() 
{
    double area;

    area = 3.10 * (std::pow(raio,2));

    return area;
}

double Circulo::perimetro() 
{
    double perimetro;

    perimetro = 3.14 * (2 * raio);

    return perimetro;
}

Circulo *Circulo::clonar(Circulo *c) 
{
    Circulo *clone = c;

    std::cout << "\nCírculo clonado!\n";

    return clone;
}

