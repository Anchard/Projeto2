#include <iostream>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include <vector>
#include <stdio.h>

using namespace std;

string upperCase(string input) {
    for (string::iterator it = input.begin(); it != input.end(); ++ it)
        *it = toupper((unsigned char)*it);
    return input;
}

void listar(vector<Imovel> listaImoveis){
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
                cout << "Titulo: " << listaImoveis[i].getTitulo() << endl;
                cout << "Cidade: " << listaImoveis[i].getCidade() << endl;
                cout << "Bairro: " << listaImoveis[i].getBairro() << endl;
                cout << "Preco de Venda: R$ " << listaImoveis[i].getPrecoVenda() << endl;
                cout << "Preco do Aluguel: R$ " << listaImoveis[i].getPrecoAluguel() << "\n\n";
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
                if(opcao == listaImoveis[i].getTipo())
                    listaImoveis[i].show();
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
                if(opcao == listaImoveis[i].getAluga_vende())
                    listaImoveis[i].show();
            }

            break;
    }
}

void buscar(vector<Imovel> listaImoveis){
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
            cin >> target;
            fflush(stdin);
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(upperCase(listaImoveis[i].getCidade()).find(upperCase(target)) != string::npos )
                    cout << "ID: " << i << endl;
                    listaImoveis[i].show();
            }

            break;

        case 2:
            cout << "Digite o nome do Bairro: ";
            fflush(stdin);
            cin >> target;
            fflush(stdin);
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(upperCase(listaImoveis[i].getBairro()).find(upperCase(target)) != string::npos )
                    cout << "ID: " << i << endl;
                    listaImoveis[i].show();
            }

            break;

         case 3:
            cout << "Digite o Titulo: ";
            fflush(stdin);
            cin >> target;
            fflush(stdin);
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(upperCase(listaImoveis[i].getTitulo()).find(upperCase(target)) != string::npos )
                    cout << "ID: " << i << endl;
                    listaImoveis[i].show();
            }

            break;

         case 4:
            cout << "Digite o Preco do Aluguel Desejado: R$  ";
            cin >> valor;
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(listaImoveis[i].getPrecoAluguel() <= valor && listaImoveis[i].getPrecoAluguel() > 0)
                    cout << "ID: " << i << endl;
                    listaImoveis[i].show();
            }

            break;

         case 5:
            cout << "Digite o Preco do Imovel Desejado: R$  ";
            cin >> valor;
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(listaImoveis[i].getPrecoVenda() <= valor && listaImoveis[i].getPrecoVenda() > 0)
                    cout << "ID: " << i << endl;
                    listaImoveis[i].show();
            }

            break;
    }
}

void remover(vector<Imovel> &listaImoveis){
    int id;

    buscar(listaImoveis);
    cout << "Digite o ID do Imovel que Deseja Remover: ";
    cin >> id;
    cout << endl;

    listaImoveis.erase(listaImoveis.begin() + id);
    cout << "Elemento Removido!" << "\n\n";
}

void menu(vector<Imovel> &listaImoveis){
    int opcao;

    cout << "Qual Operacao Deseja Realizar?" << endl;
    cout << "1. Inserir Imovel" << endl;
    cout << "2. Listar Imovel" << endl;
    cout << "3. Buscar Imovel" << endl;
    cout << "4. Remover Imovel" << endl;
    cout << "Escolha: ";
    cin >> opcao;
    cout << endl;

    switch(opcao){
        case 1:
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



    }

}

int main(){
    vector<Imovel> listaImoveis;

    Imovel imovel(2, "Terreno Legal em Mangabeira", "Joao Pessoa", "Mangabeira", "Estudante Marizete",
                  "246", "58058-300", 0, -1, 520.24);

    listaImoveis.push_back(imovel);
    //imovel.show();

    Casa casa(0, "Casa Bonita na Torre", "Joao Pessoa", "Torre", "Geminiano da Franca", "231", "58040-560", 1,
              300000.78, -1, 1, 3, 320.42, 280.00);

    casa.setAluga_vende(0);
    casa.setPrecoAluguel(370.44);
    casa.setPrecoVenda(-1);
    casa.setPavimentos(2);

    listaImoveis.push_back(casa);
    //casa.show();

    Apartamento ap(1, "Apartamento Luxuoso", "Joao Pessoa", "Manaira", "Rua da Soberba", "621", "58058-621",
                   1, 950000, -1, 350, 5, "Nascente do Poente", 7, 932.47, 2);

    listaImoveis.push_back(ap);
    //ap.show();

    while(true)
        menu(listaImoveis);

    return 0;
}
