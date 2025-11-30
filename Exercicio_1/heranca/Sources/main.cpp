#include <Bibliotecas.h>
#include <vector>
#include <iostream>

int main()
{
    std::vector<Funcionario> funcionarios;

    Assalariado a(1,"Arthur","045.589.447-78",2500);
    Horista h(2,"Heitor","782.685.169-11",40,100);
    Comissionado c(3,"Carlos","123.456.789-10",1000,5,10000,50);

    funcionarios.push_back(a);
    funcionarios.push_back(h);
    funcionarios.push_back(c);

    std::cout << "\n\n";

    a.demonstrativo();
    std::cout << "\n";

    h.demonstrativo();
    std::cout << "\n";

    c.demonstrativo();

    std::cout << "\n\n";

    return 0;
}