#include <CarroAutonomo.h>
#include <iostream>

CarroAutonomo::CarroAutonomo(int i, double b, double p, int pas, double aut) :
VeiculoAutonomo(i,b,p), passageiros(std::move(pas)), autonomia(std::move(aut))
{
    std::cout << "Carro Autônomo criado!\n";
}

CarroAutonomo::~CarroAutonomo()
{
    std::cout << "Carro Autônomo destruido!\n";
}

void CarroAutonomo::planejarRota(std::string destino) 
{
    std::cout << "Planejando rota para " << destino << "\n";
}

void CarroAutonomo::mover(double destino) 
{
    posicao = destino;
}

void CarroAutonomo::relatorioStatus() 
{
    std::cout << "\n== Relatório - Carro Autônomo ==\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Posição: " << posicao << "\n";
    std::cout << "Bateria: " << bateria << " KWh\n";
    std::cout << "Autônomia: " << autonomia << " Km\n";
    std::cout << "Passageiros: " << passageiros << "\n";
}

void CarroAutonomo::consumoPorKm(double distancia, double porcentagem) 
{
    double consumo;
    consumo = distancia / porcentagem;

    std::cout << "Carro - Consumo Por KM: " << consumo << "\n";
}