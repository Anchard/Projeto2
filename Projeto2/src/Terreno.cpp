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
    cout << "Tipo - Casa? (0) Apartamento? (1) Terreno? (2): " << this->tipo << endl;
    cout << "Titulo: " << this->titulo << endl;
    cout << "Cidade: " << this->getCidade() << endl;
    cout << "Bairro: " << this->getBairro() << endl;
    cout << "Logradouro: " << this->getLogradouro() << endl;
    cout << "Numero: " << this->getNumero() << endl;
    cout << "Cep: " << this->getCep() << endl;
    cout << "Aluga? (0) Vende? (1): " << this->aluga_vende << endl;
    cout << "Preco de Venda: R$ " << this->precoVenda << endl;
    cout << "Preco do Aluguel: R$ " << this->precoAluguel << endl;
    cout << "Area do Terreno: " << this->areaTerreno << " m2" << "\n\n";
}
