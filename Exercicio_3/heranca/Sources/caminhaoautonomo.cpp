#include <CaminhaoAutonomo.h>
#include <iostream>

CaminhaoAutonomo::CaminhaoAutonomo(int i, double b, double p, int ex, double capacidade) :
VeiculoAutonomo(i,b,p), eixos(std::move(ex)), capacidadeCarga(std::move(capacidade))
{
    std::cout << "Caminhão Autônomo criado!\n";
}

CaminhaoAutonomo::~CaminhaoAutonomo()
{
    std::cout << "Caminhão Autônomo destruido!\n";
}

void CaminhaoAutonomo::planejarRota(std::string destino) 
{
    std::cout << "Planejando rota para " << destino << "\n";
}

void CaminhaoAutonomo::mover(double destino) 
{
    posicao = destino;
}

void CaminhaoAutonomo::relatorioStatus() 
{
    std::cout << "\n== Relatório - Caminhao Autônomo ==\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Posição: " << posicao << "\n";
    std::cout << "Bateria: " << bateria << " KWh\n";
    std::cout << "Eixos: " << eixos << "\n";
    std::cout << "Capacidade de Carga: " << capacidadeCarga << " Kg\n";
}

void CaminhaoAutonomo::consumoPorKm(double distancia, double porcentagem) 
{
    double consumo;
    consumo = distancia / porcentagem;

    std::cout << "Caminhão - Consumo Por KM: " << consumo << "\n";
}