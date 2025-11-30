#include <Gerenciador.h>
#include <iostream>

void Gerenciador::adicionar(std::unique_ptr<Midia> m)
{
    midias.push_back(std::move(m));
}

void Gerenciador::abrir(std::string titulo)
{
    for(auto& m : midias)
    {
        if(m->getTitulo() == titulo)
        {
            m->reproduzir();
            std::cout << "\n";
            return;
        }
    }
    std::cout << "\n Midia não encontrada! \n";
}

void Gerenciador::listar()
{
    std::cout << "\n === Midias Disponiveis === \n";
    for(auto& m : midias)
    {
        std::cout << m->getTitulo() << "\n";
    }
    std::cout << "\n\n";
}

void Gerenciador::mostrarInfo(std::string titulo)
{
    for(auto& m : midias)
    {
        if(m->getTitulo() == titulo)
        {
            m->infoDetalhada();
            std::cout << "\n";
            return;
        }
    }
    std::cout << "\n Midia não encontrada! \n";
}