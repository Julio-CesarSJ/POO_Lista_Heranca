#ifndef CARROAUTONOMO_H
#define CARROAUTONOMO_H

#include <VeiculoAutonomo.h>
#include <string>

class CarroAutonomo : public VeiculoAutonomo
{
    protected:
    int passageiros;
    double autonomia;

    public:
    CarroAutonomo(int i, double b, double p, int pas, double aut);
    ~CarroAutonomo();

    void planejarRota(std::string destino);

    void mover(double destino);

    void relatorioStatus();

    void consumoPorKm(double distancia, double porcentagem);
};

#endif