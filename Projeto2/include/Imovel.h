#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>
#include "Endereco.h"
using namespace std;

class Imovel{
    private:
        int tipo;
        string titulo;
        Endereco endereco;
        int aluga_vende;
        float precoVenda;
        float precoAluguel;

    public:
        Imovel(){
            this->tipo = -1;
            this->titulo = "empty";
            this->endereco.cidade = "empty";
            this->endereco.bairro = "empty";
            this->endereco.logradouro = "empty";
            this->endereco.numero = "empty";
            this->endereco.cep = "empty";
            this->aluga_vende = -1;
            this->precoVenda = -1;
            this->precoAluguel = -1;
        }

        Imovel(int tipo, string titulo, string cidade, string bairro, string logradouro,
        string numero, string cep, int aluga_vende, float precoVenda, float precoAluguel){
                this->tipo = tipo;
                this->titulo = titulo;
                this->endereco.cidade = cidade;
                this->endereco.bairro = bairro;
                this->endereco.logradouro = logradouro;
                this->endereco.numero = numero;
                this->endereco.cep = cep;
                this->aluga_vende = aluga_vende;
                this->precoVenda = precoVenda;
                this->precoAluguel = precoAluguel;
        }

        void setTipo(int tipo);
        void setTitulo(string titulo);
        void setCidade(string cidade);
        void setBairro(string bairro);
        void setLogradouro(string logradouro);
        void setNumero(string numero);
        void setCep(string cep);
        void setAluga_vende(int aluga_vende);
        void setPrecoVenda(float precoVenda);
        void setPrecoAluguel(float precoAluguel);

        int getTipo();
        string getTitulo();
        string getCidade();
        string getBairro();
        string getLogradouro();
        string getNumero();
        string getCep();
        int getAluga_vende();
        float getPrecoVenda();
        float getPrecoAluguel();

        void show();
};

#endif // IMOVEL_H
