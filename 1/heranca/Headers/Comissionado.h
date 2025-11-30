#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include <Funcionario.h>

class Comissionado : public Funcionario
{
    private:
    double salarioBase;
    double porcentagem;
    double tetoComissao;
    int totalVendas;

    public:
    Comissionado(int id, std::string nome, std::string cpf, double s, double p, double teto, double total);
    ~Comissionado();

    double calcularPagamento();

    void demonstrativo();
};

#endif