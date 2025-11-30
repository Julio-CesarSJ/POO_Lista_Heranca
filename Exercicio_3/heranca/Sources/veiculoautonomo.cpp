#include <VeiculoAutonomo.h>
#include <iostream>

VeiculoAutonomo::VeiculoAutonomo(int i, double b, double p) :
id(std::move(i)), bateria(std::move(b)), posicao(std::move(p))
{
    std::cout << "Veículo Autônomo criado!\n";
}

VeiculoAutonomo::~VeiculoAutonomo()
{
    std::cout << "Veículo Autônomo destruido!\n";
}

void VeiculoAutonomo::planejarRota(std::string destino) {}

void VeiculoAutonomo::mover(double destino) {}

void VeiculoAutonomo::relatorioStatus() {}

void VeiculoAutonomo::consumoPorKm(double distancia, double porcentagem) {}