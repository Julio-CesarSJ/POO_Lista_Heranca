#include <Podcast.h>
#include <iostream>

Podcast::Podcast(std::string titulo, std::string ano, std::string duracao, std::string host, std::string convidados) :
Midia(titulo,ano,duracao), host(host), convidados(convidados)
{
    std::cout << "Podcast foi criado!\n\n";
}

Podcast::~Podcast()
{
    std::cout << "Podcast foi destruido!\n\n";
}

void Podcast::reproduzir()
{
    std::cout << "Reproduzindo: " << titulo << "\n";
}

void Podcast::infoDetalhada()
{
    std::cout << "\n=== Podcast info ===\n";
    std::cout << "Titulo: " << titulo << "\n";
    std::cout << "Ano: " << ano << "\n";
    std::cout << "Duracao: " << duracao << "h\n";
    std::cout << "Host: " << host << "\n";
    std::cout << "Convidado(s): " << convidados << "\n";
}