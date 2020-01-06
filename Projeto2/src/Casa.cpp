#include "Casa.h"
#include <iostream>

using namespace std;

void Casa::setPavimentos(int pavimentos){
    this->pavimentos = pavimentos;
}
void Casa::setQuartos(int quartos){
    this->quartos = quartos;
}
void Casa::setAreaTerreno(float areaTerreno){
    this->areaTerreno = areaTerreno;
}
void Casa::setAreaConstruida(float areaConstruida){
    this->areaConstruida = areaConstruida;
}

int Casa::getPavimentos(){
    return this->pavimentos;
}
int Casa::getQuartos(){
    return this->quartos;
}
float Casa::getAreaTerreno(){
    return this->areaTerreno;
}
float Casa::getAreaConstruida(){
    return this->areaConstruida;
}

void Casa::show(){
    cout << "Tipo - Casa? (0) Apartamento? (1) Terreno? (2): " << this->getTipo() << endl;
    cout << "Titulo: " << this->getTitulo() << endl;
    cout << "Cidade: " << this->getCidade() << endl;
    cout << "Bairro: " << this->getBairro() << endl;
    cout << "Logradouro: " << this->getLogradouro() << endl;
    cout << "Numero: " << this->getNumero() << endl;
    cout << "Cep: " << this->getCep() << endl;
    cout << "Aluga? (0) Vende? (1): " << this->getAluga_vende() << endl;
    cout << "Preco de Venda: R$ " << this->getPrecoVenda() << endl;
    cout << "Preco do Aluguel: R$ " << this->getPrecoAluguel() << endl;
    cout << "Numero de Pavimentos: " << this->pavimentos << endl;
    cout << "Numero de Quartos: " << this->quartos << endl;
    cout << "Area do Terreno: " << this->areaTerreno << " m2\n";
    cout << "Area Construida: " << this->areaConstruida << " m2\n\n";
}
