#ifndef CAMINHAOAUTONOMO_H
#define CAMINHAOAUTONOMO_H

#include <VeiculoAutonomo.h>
#include <string>

class CaminhaoAutonomo : public VeiculoAutonomo
{
    protected:
    int eixos;
    double capacidadeCarga;

    public:
    CaminhaoAutonomo(int i, double b, double p, int e, double c);
    ~CaminhaoAutonomo();

    void planejarRota(std::string destino);

    void mover(double destino);

    void relatorioStatus();

    void consumoPorKm(double distancia, double porcentagem);
};

#endif