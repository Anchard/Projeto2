#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

using namespace std;

class Imovel{
    private:
        string tipo;
        string titulo;
        string cidade;
        string bairro;
        string logradouro;
        string numero;
        string cep;
        string aluga_vende;
        float precoVenda;
        float precoAluguel;

    public:
        Imovel(string tipo, string titulo, string cidade, string bairro, string logradouro,
        string numero, string cep, string aluga_vende, float precoVenda, float precoAluguel){
                this->tipo = tipo;
                this->titulo = titulo;
                this->cidade = cidade;
                this->bairro = bairro;
                this->logradouro = logradouro;
                this->numero = numero;
                this->cep = cep;
                this->aluga_vende = aluga_vende;
                this->precoVenda = precoVenda;
                this->precoAluguel = precoAluguel;
               }

        void setTipo(string tipo);
        void setTitulo(string titulo);
        void setCidade(string cidade);
        void setBairro(string bairro);
        void setLogradouro(string logradouro);
        void setNumero(string numero);
        void setCep(string cep);
        void setAluga_vende(string aluga_vende);
        void setPrecoVenda(float precoVenda);
        void setPrecoAluguel(float precoAluguel);

        string getTipo();
        string getTitulo();
        string getCidade();
        string getBairro();
        string getLogradouro();
        string getNumero();
        string getCep();
        string getAluga_vende();
        float getPrecoVenda();
        float getPrecoAluguel();

        void show();
};

#endif // IMOVEL_H
