#ifndef ONIBUSAUTONOMO_H
#define ONIBUSAUTONOMO_H

#include <VeiculoAutonomo.h>
#include <string>

class OnibusAutonomo : public VeiculoAutonomo
{
    protected:
    int lotacao;
    double acessibilidade;

    public:
    OnibusAutonomo(int i, double b, double p, int l, double a);
    ~OnibusAutonomo();

    void planejarRota(std::string destino);

    void mover(double destino);

    void relatorioStatus();

    void consumoPorKm(double distancia, double porcentagem);
};

#endif