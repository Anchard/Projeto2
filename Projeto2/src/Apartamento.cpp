#include "Apartamento.h"
#include <iostream>

using namespace std;

void Apartamento::setArea(float area){
    this->area = area;
}
void Apartamento::setQuartos(int quartos){
    this->quartos = quartos;
}
void Apartamento::setPosicao(string posicao){
    this->posicao = posicao;
}
void Apartamento::setAndar(int andar){
    this->andar = andar;
}
void Apartamento::setCondominio(float condominio){
    this->condominio = condominio;
}
void Apartamento::setGaragem(int garagem){
    this->garagem = garagem;
}

float Apartamento::getArea(){
    return this->area;
}
int Apartamento::getQuartos(){
    return this->quartos;
}
string Apartamento::getPosicao(){
    return this->posicao;
}
int Apartamento::getAndar(){
    return this->andar;
}
float Apartamento::getCondominio(){
    return this->condominio;
}
int Apartamento::getGaragem(){
    return this->garagem;
}

void Apartamento::show(){
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
    cout << "Area: " << this->area << " m2\n";
    cout << "Numero de Quartos: " << this->quartos << endl;
    cout << "Posicao: " << this->posicao << endl;
    cout << "Andar: " << this->andar << endl;
    cout << "Condominio: R$ " << this->condominio << endl;
    cout << "Vagas na Garagem: " << this->garagem << "\n\n";
}
