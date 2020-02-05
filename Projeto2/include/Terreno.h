#ifndef TERRENO_H
#define TERRENO_H

#include "Imovel.h"
#include "Endereco.h"
#include <string>

using namespace std;

class Terreno: public Imovel{
    private:
        int tipo;
        string titulo;
        Endereco endereco;
        int aluga_vende;
        float precoVenda;
        float precoAluguel;

        float areaTerreno;

    public:
        Terreno(){
            this->tipo = 2;
            this->titulo = "empty";
            this->endereco.cidade = "empty";
            this->endereco.bairro = "empty";
            this->endereco.logradouro = "empty";
            this->endereco.numero = "empty";
            this->endereco.cep = "empty";
            this->aluga_vende = -1;
            this->precoVenda = -1;
            this->precoAluguel = -1;
            this->areaTerreno = -1;
        }

        Terreno(int tipo, string titulo, string cidade, string bairro, string logradouro,
        string numero, string cep, int aluga_vende, float precoVenda,
        float precoAluguel, float areaTerreno):
        Imovel(tipo, titulo, cidade, bairro, logradouro, numero, cep, aluga_vende, precoVenda, precoAluguel){
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
            this->areaTerreno = areaTerreno;
        }

        void setAreaTerreno(float areaTerreno);
        float getAreaTerreno();
        void show();

};

#endif // TERRENO_H
