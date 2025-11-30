#ifndef GERENCIADOR_H
#define GERENCIADOR_H

#include <vector>
#include <Midia.h>
#include <memory>

class Gerenciador
{
    private:
    std::vector<std::unique_ptr<Midia>> midias;

    public:
    void listar();

    void abrir(std::string titulo);

    void adicionar(std::unique_ptr<Midia> m);

    void mostrarInfo(std::string titulo);
};

#endif