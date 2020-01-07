#include "Imovel.h"
#include <iostream>

using namespace std;

void Imovel::setTipo(int tipo){
    this->tipo = tipo;
}
void Imovel::setTitulo(string titulo){
    this->titulo = titulo;
}
void Imovel::setCidade(string cidade){
    this->cidade = cidade;
}
void Imovel::setBairro(string bairro){
    this->bairro = bairro;
}
void Imovel::setLogradouro(string logradouro){
    this->logradouro = logradouro;
}
void Imovel::setNumero(string numero){
    this->numero = numero;
}
void Imovel::setCep(string cep){
    this->cep = cep;
}
void Imovel::setAluga_vende(int aluga_vende){
    this->aluga_vende = aluga_vende;
}
void Imovel::setPrecoVenda(float precoVenda){
    this->precoVenda = precoVenda;
}
void Imovel::setPrecoAluguel(float precoAluguel){
    this->precoAluguel = precoAluguel;
}

int Imovel::getTipo(){
    return this->tipo;
}
string Imovel::getTitulo(){
    return this->titulo;
}
string Imovel::getCidade(){
    return this->cidade;
}
string Imovel::getBairro(){
    return this->bairro;
}
string Imovel::getLogradouro(){
    return this->logradouro;
}
string Imovel::getNumero(){
    return this->numero;
}
string Imovel::getCep(){
    return this->cep;
}
int Imovel::getAluga_vende(){
    return this->aluga_vende;
}
float Imovel::getPrecoVenda(){
    return this->precoVenda;
}
float Imovel::getPrecoAluguel(){
    return this->precoAluguel;
}

void Imovel::show(){
    cout << "Tipo - Casa? (0) Apartamento? (1) Terreno? (2): " << this->tipo << endl;
    cout << "Titulo: " << this->titulo << endl;
    cout << "Cidade: " << this->cidade << endl;
    cout << "Bairro: " << this->bairro << endl;
    cout << "Logradouro: " << this->logradouro << endl;
    cout << "Numero: " << this->numero << endl;
    cout << "Cep: " << this->cep << endl;
    cout << "Aluga? (0) Vende? (1): " << this->aluga_vende << endl;
    cout << "Preco de Venda: R$ " << this->precoVenda << endl;
    cout << "Preco do Aluguel: R$ " << this->precoAluguel << "\n\n";
}
