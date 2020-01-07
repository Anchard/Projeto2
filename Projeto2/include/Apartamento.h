#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Imovel.h"

class Apartamento: public Imovel{
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

        float area;
        int quartos;
        string posicao;
        int andar;
        float condominio;
        int garagem;

    public:
        Apartamento(int tipo, string titulo, string cidade, string bairro, string logradouro,
        string numero, string cep, int aluga_vende, float precoVenda, float precoAluguel, float area,
        int quartos, string posicao, int andar, float condominio, int garagem):
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
            this->area = area;
            this->quartos = quartos;
            this->posicao = posicao;
            this->andar = andar;
            this->condominio = condominio;
            this->garagem = garagem;
        }

        void setArea(float area);
        void setQuartos(int quartos);
        void setPosicao(string posicao);
        void setAndar(int andar);
        void setCondominio(float condominio);
        void setGaragem(int garagem);

        float getArea();
        int getQuartos();
        string getPosicao();
        int getAndar();
        float getCondominio();
        int getGaragem();

        void show();

};

#endif // APARTAMENTO_H
