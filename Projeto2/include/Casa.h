#ifndef CASA_H
#define CASA_H

#include "Imovel.h"

class Casa: public Imovel{
    private:
        int tipo;
        string titulo;
        string cidade;
        string bairro;
        string logradouro;
        string numero;
        string cep;
        string aluga_vende;
        float precoVenda;
        float precoAluguel;

        int pavimentos;
        int quartos;
        float areaTerreno;
        float areaConstruida;

    public:
        Casa(int tipo, string titulo, string cidade, string bairro, string logradouro,
        string numero, string cep, int aluga_vende, float precoVenda,
        float precoAluguel, int pavimentos, int quartos, float areaTerreno, float areaConstruida):
        Imovel(tipo, titulo, cidade, bairro, logradouro, numero, cep, aluga_vende, precoVenda, precoAluguel){
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
