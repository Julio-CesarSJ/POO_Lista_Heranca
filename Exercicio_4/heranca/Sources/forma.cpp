#include <Forma.h>
#include <iostream>

Forma::Forma()
{
    std::cout << "Forma criada!\n";
}

Forma::~Forma()
{
    std::cout << "Forma destruida!\n";
}

void Forma::desenhar() {}

void Forma::mover() {}

double Forma::area() {}

double Forma::perimetro() {}

//void Forma::clonar() {}