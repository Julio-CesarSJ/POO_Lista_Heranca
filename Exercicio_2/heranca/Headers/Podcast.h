#ifndef PODCAST_H
#define PODCAST_H

#include <string>
#include <Midia.h>

class Podcast : public Midia
{
    private:
    std::string host;
    std::string convidados;  

    public:
    Podcast(std::string titulo, std::string ano, std::string duracao, std::string host, std::string convidados);
    ~Podcast();

    void reproduzir();

    void infoDetalhada();
};

#endif