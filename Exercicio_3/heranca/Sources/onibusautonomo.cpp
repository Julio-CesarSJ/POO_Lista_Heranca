#include <OnibusAutonomo.h>
#include <iostream>

OnibusAutonomo::OnibusAutonomo(int i, double b, double p, int l, double a) :
VeiculoAutonomo(i,b,p), lotacao(std::move(l)), acessibilidade(std::move(a))
{
    std::cout << "Ônibus Autônomo criado!\n";
}

OnibusAutonomo::~OnibusAutonomo()
{
    std::cout << "Ônibus Autônomo destruido!\n";
}

void OnibusAutonomo::planejarRota(std::string destino) 
{
    std::cout << "Planejando rota para " << destino << "\n";
}

void OnibusAutonomo::mover(double destino) 
{
    posicao = destino;
}

void OnibusAutonomo::relatorioStatus() 
{
    std::cout << "\n== Relatório - Onibus Autônomo ==\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Posição: " << posicao << "\n";
    std::cout << "Bateria: " << bateria << " KWh\n";
    std::cout << "Lotação: " << lotacao << "\n";
    std::cout << "Assentos Reservados: " << acessibilidade << "\n";
}

void OnibusAutonomo::consumoPorKm(double distancia, double porcentagem) 
{
    double consumo;
    consumo = distancia / porcentagem;

    std::cout << "Ônibus - Consumo Por KM: " << consumo << "\n";
}