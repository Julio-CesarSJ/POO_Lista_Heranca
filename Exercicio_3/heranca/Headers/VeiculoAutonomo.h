#ifndef VEICULOAUTONOMO_H
#define VEICULOAUTONOMO_H

#include <string>

class VeiculoAutonomo
{
    protected:
    int id;
    double bateria, posicao;

    public:
    VeiculoAutonomo(int i, double b, double p);
    virtual ~VeiculoAutonomo();

    virtual void planejarRota(std::string destino) = 0;

    virtual void mover(double destino) = 0;

    virtual void relatorioStatus() = 0;

    virtual void consumoPorKm(double distancia, double porcentagem) = 0;

};

#endif