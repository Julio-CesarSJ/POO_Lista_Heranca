#include <Funcionario.h>
#include <iostream>

Funcionario::Funcionario(int id, std::string nome, std::string cpf) : 
id(std::move(id)), nome(std::move(nome)), cpf(std::move(cpf))
{
    std::cout << "Funcionario criado!\n";
}

Funcionario::~Funcionario()
{
    std::cout << "Funcionario destruido!\n";
}

double Funcionario::calcularPagamento()
{
    double salario = 1400;
    return salario;
}


void Funcionario::demonstrativo()
{
    std::cout << "ID: " << id << " Nome: " << nome << " CPF: " << cpf << "\n";
}

