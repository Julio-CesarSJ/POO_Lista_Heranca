#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <Midia.h>

class Video : public Midia
{
    private:
    std::string codec;
    std::string resolucao;  

    public:
    Video(std::string titulo, std::string ano, std::string duracao, std::string codec, std::string resolucao);
    ~Video();

    void reproduzir();

    void infoDetalhada();
};

#endif