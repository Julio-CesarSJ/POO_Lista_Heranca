#ifndef MUSICA_H
#define MUSICA_H

#include <string>
#include <Midia.h>

class Musica : public Midia
{
    private:
    std::string artista;
    int bitrate;

    public:
    Musica(std::string titulo, std::string ano, std::string duracao, std::string artista, int bit);
    ~Musica();

    void reproduzir();

    void infoDetalhada();
};

#endif