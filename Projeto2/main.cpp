#include <iostream>
#include <memory>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include <vector>
#include <stdio.h>

using namespace std;

void showType(vector<Imovel*> listaImoveis, int i){
    if(listaImoveis[i]->getTipo() == 0)
        ((Casa*)listaImoveis[i])->show();
    else if(listaImoveis[i]->getTipo() == 1)
        ((Apartamento*)listaImoveis[i])->show();
    else if(listaImoveis[i]->getTipo() == 2)
        listaImoveis[i]->show();
}

string upperCase(string input) {
    for (string::iterator it = input.begin(); it != input.end(); ++ it)
        *it = toupper((unsigned char)*it);
    return input;
}

void inserir(vector<Imovel*> &listaImoveis){
    int opcao;
    cout << "Inserir: " << endl;
    cout << "0. Casa" << endl;
    cout << "1. Apartamento" << endl;
    cout << "2. Terreno" << endl;
    cout << "Escolha: ";
    cin >> opcao;
    cout << endl;

    string stream;
    int numero;
    float valor;
    Casa casa;
    switch(opcao){
        case 0:
            cout << "Titulo" << endl;
            cout << "Cidade" << endl;
            cout << "Bairro" << endl;
            cout << "Logradouro" << endl;
            cout << "Numero" << endl;
            cout << "CEP" << endl;
            cout << "0. Aluga 1. Vende" << endl;
            cout << "Preco do Aluguel" << endl;
            cout << "Preco de Venda" << endl;
            cout << "Numero de Pavimentos" << endl;
            cout << "Numero de Quartos" << endl;
            cout << "Area do Terreno" << endl;
            cout << "Area Construida" << "\n\n";

            casa.setTipo(0);
            fflush(stdin);
            getline(cin, stream);
            casa.setTitulo(stream);
            fflush(stdin);
            getline(cin, stream);
            casa.setCidade(stream);
            fflush(stdin);
            getline(cin, stream);
            casa.setBairro(stream);
            fflush(stdin);
            getline(cin, stream);
            casa.setLogradouro(stream);
            fflush(stdin);
            getline(cin, stream);
            casa.setNumero(stream);
            fflush(stdin);
            getline(cin, stream);
            casa.setCep(stream);
            cin >> numero;
            casa.setAluga_vende(numero);
            cin >> valor;
            casa.setPrecoAluguel(valor);
            cin >> valor;
            casa.setPrecoVenda(valor);
            cin >> numero;
            casa.setPavimentos(numero);
            cin >> numero;
            casa.setQuartos(numero);
            cin >> valor;
            casa.setAreaTerreno(valor);
            cin >> valor;
            casa.setAreaConstruida(valor);
            cout << "\nCasa Adicionada com Sucesso!\n\n";

            listaImoveis.push_back(&casa);

            break;

    }
}
void listar(vector<Imovel*> listaImoveis){
    int opcao;
    int elementos = listaImoveis.size();

    cout << "Que Tipo de Listagem?" << endl;
    cout << "1. Todos os Imoveis" << endl;
    cout << "2. Imoveis Por Tipo" << endl;
    cout << "3. Por Aluguel ou Venda" << endl;
    cout << "Escolha: ";
    cin >> opcao;
    cout << endl;

    switch(opcao){
        case 1:
            for(int i = 0; i < elementos; i++){
                cout << "Titulo: " << listaImoveis[i]->getTitulo() << endl;
                cout << "Cidade: " << listaImoveis[i]->getCidade() << endl;
                cout << "Bairro: " << listaImoveis[i]->getBairro() << endl;
                cout << "Preco de Venda: R$ " << listaImoveis[i]->getPrecoVenda() << endl;
                cout << "Preco do Aluguel: R$ " << listaImoveis[i]->getPrecoAluguel() << "\n\n";
            }

            break;

        case 2:
            int opcao;
            cout << "Qual Tipo Deseja Pesquisar?" << endl;
            cout << "0. Casa" << endl;
            cout << "1. Apartamento" << endl;
            cout << "2. Terreno" << endl;
            cout << "Escolha: ";
            cin >> opcao;
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(opcao == listaImoveis[i]->getTipo())
                    showType(listaImoveis, i);
            }

            break;

        case 3:
            cout << "Qual Categoria Deseja Pesquisar?" << endl;
            cout << "0. Aluguel" << endl;
            cout << "1. Venda" << endl;
            cout << "Escolha: ";
            cin >> opcao;
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(opcao == listaImoveis[i]->getAluga_vende())
                    showType(listaImoveis, i);
            }

            break;
    }
}

void buscar(vector<Imovel*> listaImoveis){
    int opcao;
    int elementos = listaImoveis.size();

    cout << "Que Tipo de Busca" << endl;
    cout << "1. Cidade" << endl;
    cout << "2. Bairro" << endl;
    cout << "3. Titulo" << endl;
    cout << "4. Preco de Aluguel" << endl;
    cout << "5. Preco de Venda" << endl;
    cout << "Escolha: ";
    cin >> opcao;
    cout << endl;

    string target;
    float valor;
    switch(opcao){
        case 1:
            cout << "Digite o nome da Cidade: ";
            fflush(stdin);
            getline(cin, target);
            fflush(stdin);
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(upperCase(listaImoveis[i]->getCidade()).find(upperCase(target)) != string::npos){
                    cout << "ID: " << i << endl;
                    showType(listaImoveis, i);
                }
            }

            break;

        case 2:
            cout << "Digite o nome do Bairro: ";
            fflush(stdin);
            getline(cin, target);
            fflush(stdin);
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(upperCase(listaImoveis[i]->getBairro()).find(upperCase(target)) != string::npos){
                    cout << "ID: " << i << endl;
                    showType(listaImoveis, i);
                }
            }

            break;

         case 3:
            cout << "Digite o Titulo: ";
            fflush(stdin);
            getline(cin, target);
            fflush(stdin);
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(upperCase(listaImoveis[i]->getTitulo()).find(upperCase(target)) != string::npos){
                    cout << "ID: " << i << endl;
                    showType(listaImoveis, i);
                }
            }

            break;

         case 4:
            cout << "Digite o Preco do Aluguel Desejado: R$  ";
            cin >> valor;
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(listaImoveis[i]->getPrecoAluguel() <= valor && listaImoveis[i]->getPrecoAluguel() > 0){
                    cout << "ID: " << i << endl;
                    listaImoveis[i]->show();
                }
            }

            break;

         case 5:
            cout << "Digite o Preco do Imovel Desejado: R$  ";
            cin >> valor;
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(listaImoveis[i]->getPrecoVenda() <= valor && listaImoveis[i]->getPrecoVenda() > 0){
                    cout << "ID: " << i << endl;
                    listaImoveis[i]->show();
                }
            }

            break;
    }
}

void remover(vector<Imovel*> &listaImoveis){
    int id;

    buscar(listaImoveis);
    cout << "Digite o ID do Imovel que Deseja Remover: ";
    cin >> id;
    cout << endl;

    listaImoveis.erase(listaImoveis.begin() + id);
    cout << "Elemento Removido!" << "\n\n";
}

void editar(vector<Imovel*> &listaImoveis){
    int id;

    buscar(listaImoveis);
    cout << "Digite o ID do Imovel que Deseja Editar: ";
    cin >> id;
    cout << endl;

    switch(listaImoveis[id]->getTipo()){
        case 0:
            int opcao;

            cout << "01. Editar Titulo" << endl;
            cout << "02. Editar Cidade" << endl;
            cout << "03. Editar Bairro" << endl;
            cout << "04. Editar Logradouro" << endl;
            cout << "05. Editar Numero" << endl;
            cout << "06. Editar CEP" << endl;
            cout << "07. Editar Aluga ou Vende" << endl;
            cout << "08. Preco do Aluguel" << endl;
            cout << "09. Preco de Venda" << endl;
            cout << "10. Numero de Pavimentos" << endl;
            cout << "11. Numero de Quartos" << endl;
            cout << "12. Area do Terreno" << endl;
            cout << "13. Area Construida" << endl;
            cout << "Digite a Opcao Desejada: ";
            cin >> opcao;
            cout << endl;

            string stream;
            int numero;
            float valor;
            switch(opcao){
                case 1:
                    cout << "Novo Titulo: ";
                    fflush(stdin);
                    cin >> stream;
                    cout << endl;
                    listaImoveis[id]->setTitulo(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 2:
                    cout << "Nova Cidade: ";
                    fflush(stdin);
                    cin >> stream;
                    cout << endl;
                    listaImoveis[id]->setCidade(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 3:
                    cout << "Novo Bairro: ";
                    fflush(stdin);
                    cin >> stream;
                    cout << endl;
                    listaImoveis[id]->setBairro(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 4:
                    cout << "Novo Logradouro: ";
                    fflush(stdin);
                    cin >> stream;
                    cout << endl;
                    listaImoveis[id]->setLogradouro(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 5:
                    cout << "Novo Numero: ";
                    fflush(stdin);
                    cin >> stream;
                    cout << endl;
                    listaImoveis[id]->setNumero(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 6:
                    cout << "Novo CEP: ";
                    fflush(stdin);
                    cin >> stream;
                    cout << endl;
                    listaImoveis[id]->setCep(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 7:
                    cout << "0. Aluga 1. Vende: ";
                    cin >> numero;
                    cout << endl;
                    listaImoveis[id]->setAluga_vende(numero);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 8:
                    cout << "Novo Valor do Aluguel: ";
                    cin >> valor;
                    cout << endl;
                    listaImoveis[id]->setPrecoAluguel(valor);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 9:
                    cout << "Novo Valor de Venda: ";
                    cin >> valor;
                    cout << endl;
                    listaImoveis[id]->setPrecoVenda(valor);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 10:
                    cout << "Numero de Pavimentos: ";
                    cin >> numero;
                    cout << endl;
                    ((Casa*)listaImoveis[id])->setPavimentos(numero);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 11:
                    cout << "Numero de Quartos: ";
                    cin >> numero;
                    cout << endl;
                    ((Casa*)listaImoveis[id])->setQuartos(numero);
                    cout << "Alteracao Efetuada\n\n";
                    break;
            }
    }

}



void menu(vector<Imovel*> &listaImoveis){
    int opcao;

    cout << "Qual Operacao Deseja Realizar?" << endl;
    cout << "1. Inserir Imovel" << endl;
    cout << "2. Listar Imovel" << endl;
    cout << "3. Buscar Imovel" << endl;
    cout << "4. Remover Imovel" << endl;
    cout << "5. Editar Imovel" << endl;
    cout << "Escolha: ";
    cin >> opcao;
    cout << endl;

    switch(opcao){
        case 1:
            inserir(listaImoveis);
            break;

        case 2:
            listar(listaImoveis);
            break;

        case 3:
            buscar(listaImoveis);
            break;

        case 4:
            remover(listaImoveis);
            break;

        case 5:
            editar(listaImoveis);
            break;



    }

}

int main(){
    vector<Imovel*> listaImoveis;
    listaImoveis.reserve(30);

    Imovel imovel(2, "Terreno Legal em Mangabeira", "Joao Pessoa", "Mangabeira", "Estudante Marizete",
                  "246", "58058-300", 0, -1, 520.24);

    listaImoveis.push_back(&imovel);
    //imovel.show();

    Casa casa(0, "Casa Bonita na Torre", "Joao Pessoa", "Torre", "Geminiano da Franca", "231", "58040-560", 1,
              300000.78, -1, 1, 3, 320.42, 280.00);

    casa.setAluga_vende(0);
    casa.setPrecoAluguel(370.44);
    casa.setPrecoVenda(-1);
    casa.setPavimentos(2);
    casa.setCidade("Cabedelo");

    listaImoveis.push_back(&casa);
    //casa.show();

    Apartamento ap(1, "Apartamento Luxuoso", "Joao Pessoa", "Manaira", "Rua da Soberba", "621", "58058-621",
                   1, 950000, -1, 350, 5, "Nascente do Poente", 7, 932.47, 2);

    listaImoveis.push_back(&ap);
    //ap.show();

    while(true)
        menu(listaImoveis);

    return 0;
}
