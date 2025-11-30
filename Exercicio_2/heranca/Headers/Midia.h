#ifndef MIDIA_H
#define MIDIA_H

#include <string>

class Midia
{
    protected:
    std::string titulo;
    std::string ano;
    std::string duracao;

    public:
    Midia(std::string titulo, std::string ano, std::string duracao);
    virtual ~Midia();

    std::string getTitulo()
    {
        return titulo;
    }

    virtual void reproduzir() = 0;

    virtual void infoDetalhada() = 0;
};

#endif