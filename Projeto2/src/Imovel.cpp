#include "Imovel.h"
#include <iostream>

using namespace std;

void Imovel::setTipo(string tipo){
    this->tipo = tipo;
}
void Imovel::setTitulo(string titulo){
    this->titulo = titulo;
}
void Imovel::setCidade(string cidade){
    this->endereco.cidade = cidade;
}
void Imovel::setBairro(string bairro){
    this->endereco.bairro = bairro;
}
void Imovel::setLogradouro(string logradouro){
    this->endereco.logradouro = logradouro;
}
void Imovel::setNumero(string numero){
    this->endereco.numero = numero;
}
void Imovel::setCep(string cep){
    this->endereco.cep = cep;
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

string Imovel::getTipo(){
    return this->tipo;
}
string Imovel::getTitulo(){
    return this->titulo;
}
string Imovel::getCidade(){
    return this->endereco.cidade;
}
string Imovel::getBairro(){
    return this->endereco.bairro;
}
string Imovel::getLogradouro(){
    return this->endereco.logradouro;
}
string Imovel::getNumero(){
    return this->endereco.numero;
}
string Imovel::getCep(){
    return this->endereco.cep;
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
    cout << "Tipo - Casa? (000) Apartamento? (001) Terreno? (002): " << this->tipo << endl;
    cout << "Titulo: " << this->titulo << endl;
    cout << "Cidade: " << this->getCidade() << endl;
    cout << "Bairro: " << this->getBairro() << endl;
    cout << "Logradouro: " << this->getLogradouro() << endl;
    cout << "Numero: " << this->getNumero() << endl;
    cout << "Cep: " << this->getCep() << endl;
    cout << "Aluga? (0) Vende? (1): " << this->aluga_vende << endl;
    cout << "Preco de Venda: R$ " << this->precoVenda << endl;
    cout << "Preco do Aluguel: R$ " << this->precoAluguel << "\n\n";
}
