#include <Video.h>
#include <iostream>

Video::Video(std::string titulo, std::string ano, std::string duracao, std::string codec, std::string resolucao) :
Midia(titulo,ano,duracao), codec(codec), resolucao(resolucao)
{
    std::cout << "Video foi criado!\n\n";
}

Video::~Video()
{
    std::cout << "Video foi destruido!\n\n";
}

void Video::reproduzir()
{
    std::cout << "Reproduzindo: " << titulo << "\n";
}

void Video::infoDetalhada()
{
    std::cout << "\n=== Video info ===\n";
    std::cout << "Titulo: " << titulo << "\n";
    std::cout << "Ano: " << ano << "\n";
    std::cout << "Duracao: " << duracao << "min\n";
    std::cout << "Codec: " << codec << "\n";
    std::cout << "Resolucao: " << resolucao << "p\n";
}