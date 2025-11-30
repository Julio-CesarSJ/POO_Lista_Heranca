#include <Bibliotecas.h>

// Utilizar g++ 14 para a correta compilação do código

int main()
{
    Gerenciador g;

    g.adicionar(std::make_unique<Musica>("acisum","2022","3","Karlos",320));
    g.adicionar(std::make_unique<Podcast>("PodTech","2020","2","Gustavo","Larissa e Eduardo"));
    g.adicionar(std::make_unique<Video>("Apresentação","2015","14","H.264","720"));
    g.adicionar(std::make_unique<Video>("Casamento","2023","48","H.265","2160"));


    g.listar();

    g.abrir("PodTech");
    g.abrir("Casamento");

    g.mostrarInfo("acisum");
    g.mostrarInfo("Apresentação");

    return 0;
}