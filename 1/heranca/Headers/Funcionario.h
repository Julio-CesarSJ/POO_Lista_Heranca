#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
    protected:
    int id;
    std::string nome;
    std::string cpf;

    public:
    Funcionario(int id, std::string nome, std::string cpf);
    virtual ~Funcionario();

    virtual double calcularPagamento();

    virtual void demonstrativo();
};

#endif