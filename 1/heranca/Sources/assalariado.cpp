#include <Assalariado.h>
#include <iostream>

Assalariado::Assalariado(int id, std::string nome, std::string cpf, double s) : 
Funcionario(id,nome,cpf), salarioMensal(std::move(s))
{
    std::cout << "Assalariado foi criado!\n\n";
}

Assalariado::~Assalariado()
{
    std::cout << "Assalariado foi destruido!\n\n";
}

double Assalariado::calcularPagamento()
{
    return salarioMensal;
}

void Assalariado::demonstrativo()
{
    std::cout << "ID: " << id << " Nome: " << nome << " CPF: " << cpf 
    << " Tipo: Assalariado  Salario: R$" << salarioMensal << "\n";
}