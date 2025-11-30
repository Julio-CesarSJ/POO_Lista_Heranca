#include <Comissionado.h>
#include <iostream>

Comissionado::Comissionado(int id, std::string nome, std::string cpf, double s, double p, double teto, double total) : 
Funcionario(id,nome,cpf), salarioBase(std::move(s)), porcentagem(std::move(p)),
tetoComissao(std::move(teto)), totalVendas(std::move(total))
{
    std::cout << "Comissionado foi criado!\n\n";
}

Comissionado::~Comissionado()
{
    std::cout << "Comissionado foi destruido!\n\n";
}

double Comissionado::calcularPagamento()
{
    double comissao = ((porcentagem / 100) * totalVendas);
    if(comissao >= tetoComissao)
    {
        return (salarioBase + tetoComissao);
    }

    return (salarioBase + comissao);
}

void Comissionado::demonstrativo()
{
    std::cout << "ID: " << id << " Nome: " << nome << " CPF: " << cpf 
    << " Tipo: Comissionado  Salario: R$" << calcularPagamento() << "\n";
}