#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include <Funcionario.h>

class Assalariado : public Funcionario
{
    private:
    double salarioMensal;

    public:
    Assalariado(int id, std::string nome, std::string cpf, double s);
    ~Assalariado();

    double calcularPagamento();

    void demonstrativo();
};

#endif