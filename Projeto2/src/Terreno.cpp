#include "Terreno.h"
#include <iostream>
#include <string>
using namespace std;

void Terreno::setAreaTerreno(float areaTerreno){
    this->areaTerreno = areaTerreno;
}
float Terreno::getAreaTerreno(){
    return this->areaTerreno;
}

void Terreno::show(){
    cout << "Tipo - Casa? (i000) Apartamento? (i001) Terreno? (i002): " << this->getTipo() << endl;
    cout << "Titulo: " << this->getTitulo() << endl;
    cout << "Cidade: " << this->getCidade() << endl;
    cout << "Bairro: " << this->getBairro() << endl;
    cout << "Logradouro: " << this->getLogradouro() << endl;
    cout << "Numero: " << this->getNumero() << endl;
    cout << "Cep: " << this->getCep() << endl;
    cout << "Aluga? (0) Vende? (1): " << this->getAluga_vende() << endl;
    cout << "Preco de Venda: R$ " << this->getPrecoVenda() << endl;
    cout << "Preco do Aluguel: R$ " << this->getPrecoAluguel() << endl;
    cout << "Area do Terreno: " << this->getAreaTerreno() << " m2" << "\n\n";
}
