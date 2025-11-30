#include <Musica.h>
#include <iostream>

Musica::Musica(std::string titulo, std::string ano, std::string duracao, std::string artista, int bitrate) :
Midia(titulo,ano,duracao), artista(artista), bitrate(std::move(bitrate))
{
    std::cout << "Musica foi criada!\n\n";
}

Musica::~Musica()
{
    std::cout << "Musica foi destruida!\n\n";
}

void Musica::reproduzir()
{
    std::cout << "Reproduzindo: " << titulo << "\n";
}

void Musica::infoDetalhada()
{
    std::cout << "\n=== Musica info ===\n";
    std::cout << "Titulo: " << titulo << "\n";
    std::cout << "Ano: " << ano << "\n";
    std::cout << "Duracao: " << duracao << "min\n";
    std::cout << "Artista: " << artista << "\n";
    std::cout << "Bitrate: " << bitrate << "kbps\n";
}