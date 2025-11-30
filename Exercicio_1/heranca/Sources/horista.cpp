#include <Horista.h>
#include <iostream>

Horista::Horista(int id, std::string nome, std::string cpf, double h, double v) : 
Funcionario(id,nome,cpf), horasTrabalhadas(std::move(h)), valorHora(std::move(v))
{
    std::cout << "Horista foi criado!\n\n";
}

Horista::~Horista()
{
    std::cout << "Horista foi destruido!\n\n";
}

double Horista::calcularPagamento()
{
    double pag = 0.0;
    if(horasTrabalhadas <= 44)
    {
        pag = horasTrabalhadas * valorHora; 
    }
    else
    {
        double horasExtras = horasTrabalhadas - 44;
        pag = (((valorHora * 1.5) * horasExtras) + (horasTrabalhadas * 44));
    }

    return pag;
}

void Horista::demonstrativo()
{
    std::cout << "ID: " << id << " Nome: " << nome << " CPF: " << cpf;
    std::cout << " Tipo: Horista  Salario: R$" << calcularPagamento() << "\n";
}