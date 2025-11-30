#include <Bibliotecas.h>
#include <iostream>

int main()
{
    CarroAutonomo carro(5,100,0,4,478), *c;
    CaminhaoAutonomo caminhao(8,500,0,3,1000), *ca;
    OnibusAutonomo onibus(85,480,0,20,10), *o;

    c = &carro;
    ca = &caminhao;
    o = &onibus;

    c->relatorioStatus();
    ca->relatorioStatus();
    o->relatorioStatus();

    std::cout << "\n\n";

    return 0;
}