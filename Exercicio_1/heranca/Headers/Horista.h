#ifndef HORISTA_H
#define HORISTA_H

#include <Funcionario.h>

class Horista : public Funcionario
{
    private:
    int horasTrabalhadas;
    int valorHora;

    public:
    Horista(int id, std::string nome, std::string cpf, double h, double v);
    ~Horista();

    double calcularPagamento();

    void demonstrativo();
};

#endif