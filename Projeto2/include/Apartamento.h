#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Imovel.h"
#include "Endereco.h"

class Apartamento: public Imovel{
    private:
        int tipo;
        string titulo;
        Endereco endereco;
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
        Apartamento(){
            this->tipo = 1;
            this->titulo = "empty";
            this->endereco.cidade = "empty";
            this->endereco.bairro = "empty";
            this->endereco.logradouro = "empty";
            this->endereco.numero = "empty";
            this->endereco.cep = "empty";
            this->aluga_vende = -1;
            this->precoVenda = -1;
            this->precoAluguel = -1;
            this->area = -1;
            this->quartos = -1;
            this->posicao = -1;
            this->andar = -1;
            this->condominio = -1;
            this->garagem = -1;
        }

        Apartamento(int tipo, string titulo, string cidade, string bairro, string logradouro,
        string numero, string cep, int aluga_vende, float precoVenda, float precoAluguel, float area,
        int quartos, string posicao, int andar, float condominio, int garagem):
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
