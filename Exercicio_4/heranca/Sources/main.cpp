#include <Bibliotecas.h>
#include <iostream>

int main()
{
    Circulo c1(5,7,1);
    Retangulo r1(10,2,4,6);
    Poligono p1;

    Circulo *c2;
    Retangulo *r2;

    struct Ponto v1 = {1,15};
    struct Ponto v2 = {7,10};
    struct Ponto v3 = {2,5};

    p1.adicionarVertice(v1);
    p1.adicionarVertice(v2);
    p1.adicionarVertice(v3);

    std::cout << "\n=== Círculo ===\n\n";

    c1.validarCirculo();
    std::cout << "\nÁrea: " << c1.area() << "\n";
    std::cout << "Perímetro: " << c1.perimetro() << "\n";
    c1.desenhar();
    c1.mover();
    c2 = c1.clonar(&c1);

    std::cout << "\nÁrea Clone: " << c2->area() << "\n";

    std::cout << "\n=== Retângulo ===\n";

    std::cout << "Área: " << r1.area() << "\n";
    std::cout << "Perímetro: " << r1.perimetro() << "\n";
    r1.desenhar();
    r1.mover();
    r2 = r1.clonar(&r1);

    std::cout << "\nPerímetro Clone: " << r2->perimetro() << "\n\n";
    

    return 0;
}