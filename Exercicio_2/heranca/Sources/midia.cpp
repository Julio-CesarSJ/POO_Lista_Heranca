#include <Midia.h>
#include <iostream>

Midia::Midia(std::string titulo, std::string ano, std::string duracao) :
titulo(std::move(titulo)), ano(std::move(ano)), duracao(std::move(duracao))
{
    std::cout << "Midia foi criada!\n";
}

Midia::~Midia()
{
    std::cout << "Midia foi destruida!\n";
}

void Midia::reproduzir() {}

void Midia::infoDetalhada() {}