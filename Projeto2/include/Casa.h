#ifndef CASA_H
#define CASA_H

#include "Imovel.h"
#include "Endereco.h"

class Casa: public Imovel{
    private:
        int tipo;
        string titulo;
        Endereco endereco;
        int aluga_vende;
        float precoVenda;
        float precoAluguel;

        int pavimentos;
        int quartos;
        float areaTerreno;
        float areaConstruida;

    public:
        Casa(){
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
            this->pavimentos = -1;
            this->quartos = -1;
            this->areaTerreno = -1;
            this->areaConstruida = -1;
        }

        Casa(int tipo, string titulo, string cidade, string bairro, string logradouro,
        string numero, string cep, int aluga_vende, float precoVenda,
        float precoAluguel, int pavimentos, int quartos, float areaTerreno, float areaConstruida):
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
            this->pavimentos = pavimentos;
            this->quartos = quartos;
            this->areaTerreno = areaTerreno;
            this->areaConstruida = areaConstruida;
        }

        void setPavimentos(int pavimentos);
        void setQuartos(int quartos);
        void setAreaTerreno(float areaTerreno);
        void setAreaConstruida(float areaConstruida);

        int getPavimentos();
        int getQuartos();
        float getAreaTerreno();
        float getAreaConstruida();

        void show();
};

#endif // CASA_H
