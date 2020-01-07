#include <iostream>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include <vector>

using namespace std;

void menu(vector<Imovel> listaImoveis, int imoveis){
    int opcao;

    cout << "Qual Operacao Deseja Realizar?" << endl;
    cout << "1. Inserir Imovel" << endl;
    cout << "2. Listar Imovel" << endl;
    cout << "Escolha: ";
    cin >> opcao;
    cout << endl;

    switch(opcao){
        case 1:
            break;

        case 2:
            int opcao;

            cout << "Que Tipo de Listagem?" << endl;
            cout << "1. Todos os Imoveis" << endl;
            cout << "2. Imoveis Por Tipo" << endl;
            cout << "3. Por Aluguel ou Venda" << endl;
            cout << "Escolha: ";
            cin >> opcao;
            cout << endl;

            switch(opcao){
                case 1:
                    for(int i = 0; i < imoveis; i++){
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

                    for(int i = 0; i < imoveis; i++){
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

                    for(int i = 0; i < imoveis; i++){
                        if(opcao == listaImoveis[i].getAluga_vende())
                            listaImoveis[i].show();
                    }

                    break;

            }
    }

}

int main(){
    vector<Imovel> listaImoveis;
    int imoveis = 0;

    Imovel imovel(2, "Terreno Legal em Mangabeira", "Joao Pessoa", "Mangabeira", "Estudante Marizete",
                  "246", "58058-300", 0, -1, 520.24);

    listaImoveis.push_back(imovel);
    imoveis++;
    //imovel.show();

    Casa casa(0, "Casa Bonita na Torre", "Joao Pessoa", "Torre", "Geminiano da Franca", "231", "58040-560", 1,
              300000.78, -1, 1, 3, 320.42, 280.00);

    casa.setAluga_vende(0);
    casa.setPrecoAluguel(370.44);
    casa.setPrecoVenda(-1);
    casa.setPavimentos(2);

    listaImoveis.push_back(casa);
    imoveis++;
    //casa.show();

    Apartamento ap(1, "Apartamento Luxuoso", "Joao Pessoa", "Manaira", "Rua da Soberba", "621", "58058-621",
                   1, 950000, -1, 350, 5, "Nascente do Poente", 7, 932.47, 2);

    listaImoveis.push_back(ap);
    imoveis++;
    //ap.show();

    menu(listaImoveis, imoveis);

    return 0;
}
