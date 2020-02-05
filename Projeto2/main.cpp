#include <iostream>
#include <memory>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include <vector>
#include <stdio.h>
#include "Terreno.h"
#include <fstream>

using namespace std;

void showType(vector<Imovel*> listaImoveis, int i){
    if(listaImoveis[i]->getTipo() == "i000")
        ((Casa*)listaImoveis[i])->show();
    else if(listaImoveis[i]->getTipo() == "i001")
        ((Apartamento*)listaImoveis[i])->show();
    else if(listaImoveis[i]->getTipo() == "i002")
        ((Terreno*)listaImoveis[i])->show();
}

string upperCase(string input) {
    for (string::iterator it = input.begin(); it != input.end(); ++ it)
        *it = toupper((unsigned char)*it);
    return input;
}

void salvaArquivo(vector<Imovel*> listaImoveis) {
    int tam = listaImoveis.size();
    ofstream file;

    file.open("dados.txt");
    if (!file.is_open()) {
        cout << "Nao foi possivel abrir o arquivo para escrita\n" << endl;
        return ;
    }
    for (int i = 0; i < tam; i++){
        if(listaImoveis[i]->getTipo() == "i000"){
            file << listaImoveis[i]->getTipo() << endl;
            file << listaImoveis[i]->getTitulo() << endl;
            file << listaImoveis[i]->getCidade() << endl;
            file << listaImoveis[i]->getBairro() << endl;
            file << listaImoveis[i]->getLogradouro() << endl;
            file << listaImoveis[i]->getNumero() << endl;
            file << listaImoveis[i]->getCep() << endl;
            file << listaImoveis[i]->getAluga_vende() << endl;
            file << listaImoveis[i]->getPrecoVenda() << endl;
            file << listaImoveis[i]->getPrecoAluguel() << endl;
            file << ((Casa*) listaImoveis[i])->getPavimentos() << endl;
            file << ((Casa*) listaImoveis[i])->getQuartos() << endl;
            file << ((Casa*) listaImoveis[i])->getAreaTerreno() << endl;
            file << ((Casa*) listaImoveis[i])->getAreaConstruida() << endl;
        }

        else if(listaImoveis[i]->getTipo() == "i001"){
            file << listaImoveis[i]->getTipo() << endl;
            file << listaImoveis[i]->getTitulo() << endl;
            file << listaImoveis[i]->getCidade() << endl;
            file << listaImoveis[i]->getBairro() << endl;
            file << listaImoveis[i]->getLogradouro() << endl;
            file << listaImoveis[i]->getNumero() << endl;
            file << listaImoveis[i]->getCep() << endl;
            file << listaImoveis[i]->getAluga_vende() << endl;
            file << listaImoveis[i]->getPrecoVenda() << endl;
            file << listaImoveis[i]->getPrecoAluguel() << endl;
            file << ((Apartamento*) listaImoveis[i])->getArea() << endl;
            file << ((Apartamento*) listaImoveis[i])->getQuartos() << endl;
            file << ((Apartamento*) listaImoveis[i])->getPosicao() << endl;
            file << ((Apartamento*) listaImoveis[i])->getAndar() << endl;
            file << ((Apartamento*) listaImoveis[i])->getCondominio() << endl;
            file << ((Apartamento*) listaImoveis[i])->getGaragem() << endl;
        }

        else if(listaImoveis[i]->getTipo() == "i002"){
            file << listaImoveis[i]->getTipo() << endl;
            file << listaImoveis[i]->getTitulo() << endl;
            file << listaImoveis[i]->getCidade() << endl;
            file << listaImoveis[i]->getBairro() << endl;
            file << listaImoveis[i]->getLogradouro() << endl;
            file << listaImoveis[i]->getNumero() << endl;
            file << listaImoveis[i]->getCep() << endl;
            file << listaImoveis[i]->getAluga_vende() << endl;
            file << listaImoveis[i]->getPrecoVenda() << endl;
            file << listaImoveis[i]->getPrecoAluguel() << endl;
            file << ((Terreno*) listaImoveis[i])->getAreaTerreno() << endl;
        }
    }

    cout << "Arquivo Salvo!\n\n";
    file.close();
}

void lerArquivo(vector<Imovel*> &listaImoveis){
    ifstream file;
    string stream;
    int numero;
    float valor;
    Casa* casa = new Casa();
    Apartamento* ap = new Apartamento();
    Terreno* terreno = new Terreno();

    file.open("dados.txt");
    if (!file.is_open()) {
        cout << "Nao foi possivel abrir o arquivo para leitura" << endl;
        return;
    }
    while(1){
        getline(file, stream);
        if(stream == "i000"){
            casa->setTipo(stream);
            getline(file, stream);
            casa->setTitulo(stream);
            getline(file, stream);
            casa->setCidade(stream);
            getline(file, stream);
            casa->setBairro(stream);
            getline(file, stream);
            casa->setLogradouro(stream);
            getline(file, stream);
            casa->setNumero(stream);
            getline(file, stream);
            casa->setCep(stream);
            file >> numero;
            file.ignore();
            casa->setAluga_vende(numero);
            file >> valor;
            file.ignore();
            casa->setPrecoVenda(valor);
            file >> valor;
            file.ignore();
            casa->setPrecoAluguel(valor);
            file >> numero;
            file.ignore();
            casa->setPavimentos(numero);
            file >> numero;
            file.ignore();
            casa->setQuartos(numero);
            file >> valor;
            file.ignore();
            casa->setAreaTerreno(valor);
            file >> valor;
            file.ignore();
            casa->setAreaConstruida(valor);

            listaImoveis.push_back(casa);
        }

        else if(stream == "i001"){
            ap->setTipo(stream);
            getline(file, stream);
            ap->setTitulo(stream);
            getline(file, stream);
            ap->setCidade(stream);
            getline(file, stream);
            ap->setBairro(stream);
            getline(file, stream);
            ap->setLogradouro(stream);
            getline(file, stream);
            ap->setNumero(stream);
            getline(file, stream);
            ap->setCep(stream);
            file >> numero;
            file.ignore();
            ap->setAluga_vende(numero);
            file >> valor;
            file.ignore();
            ap->setPrecoVenda(valor);
            file >> valor;
            file.ignore();
            ap->setPrecoAluguel(valor);
            file >> valor;
            file.ignore();
            ap->setArea(valor);
            file >> numero;
            file.ignore();
            ap->setQuartos(numero);
            getline(file, stream);
            ap->setPosicao(stream);
            file >> numero;
            file.ignore();
            ap->setAndar(numero);
            file >> valor;
            file.ignore();
            ap->setCondominio(valor);
            file >> numero;
            file.ignore();
            ap->setGaragem(numero);

            listaImoveis.push_back(ap);
        }

        else if(stream == "i002"){
            terreno->setTipo(stream);
            getline(file, stream);
            terreno->setTitulo(stream);
            getline(file, stream);
            terreno->setCidade(stream);
            getline(file, stream);
            terreno->setBairro(stream);
            getline(file, stream);
            terreno->setLogradouro(stream);
            getline(file, stream);
            terreno->setNumero(stream);
            getline(file, stream);
            terreno->setCep(stream);
            file >> numero;
            file.ignore();
            terreno->setAluga_vende(numero);
            file >> valor;
            file.ignore();
            terreno->setPrecoVenda(valor);
            file >> valor;
            file.ignore();
            terreno->setPrecoAluguel(valor);
            file >> valor;
            file.ignore();
            terreno->setAreaTerreno(valor);

            listaImoveis.push_back(terreno);
        }
        if (file.eof() || file.bad() || file.fail())
            break;
    }


    file.close();

    cout << "Imoveis Carregados!\n\n";
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
    Casa *casa = new Casa();
    Apartamento *ap = new Apartamento();
    Terreno *terreno = new Terreno();
    switch(opcao){
        case 0:
            cout << "-> Titulo" << endl;
            cout << "-> Cidade" << endl;
            cout << "-> Bairro" << endl;
            cout << "-> Logradouro" << endl;
            cout << "-> Numero" << endl;
            cout << "-> CEP" << endl;
            cout << "-> 0. Aluga 1. Vende" << endl;
            cout << "-> Preco de Venda" << endl;
            cout << "-> Preco do Aluguel" << endl;
            cout << "-> Numero de Pavimentos" << endl;
            cout << "-> Numero de Quartos" << endl;
            cout << "-> Area do Terreno" << endl;
            cout << "-> Area Construida" << "\n\n";

            casa->setTipo(0);
            fflush(stdin);
            getline(cin, stream);
            casa->setTitulo(stream);
            fflush(stdin);
            getline(cin, stream);
            casa->setCidade(stream);
            fflush(stdin);
            getline(cin, stream);
            casa->setBairro(stream);
            fflush(stdin);
            getline(cin, stream);
            casa->setLogradouro(stream);
            fflush(stdin);
            getline(cin, stream);
            casa->setNumero(stream);
            fflush(stdin);
            getline(cin, stream);
            casa->setCep(stream);
            cin >> numero;
            casa->setAluga_vende(numero);
            cin >> valor;
            casa->setPrecoVenda(valor);
            cin >> valor;
            casa->setPrecoAluguel(valor);
            cin >> numero;
            casa->setPavimentos(numero);
            cin >> numero;
            casa->setQuartos(numero);
            cin >> valor;
            casa->setAreaTerreno(valor);
            cin >> valor;
            casa->setAreaConstruida(valor);
            cout << "\nCasa Adicionada com Sucesso!\n\n";

            listaImoveis.push_back(casa);
            break;

        case 1:
            cout << "-> Titulo" << endl;
            cout << "-> Cidade" << endl;
            cout << "-> Bairro" << endl;
            cout << "-> Logradouro" << endl;
            cout << "-> Numero" << endl;
            cout << "-> CEP" << endl;
            cout << "-> 0. Aluga 1. Vende" << endl;
            cout << "-> Preco de Venda" << endl;
            cout << "-> Preco do Aluguel" << endl;
            cout << "-> Area" << endl;
            cout << "-> Numero de Quartos" << endl;
            cout << "-> Posicao" << endl;
            cout << "-> Andar" << endl;
            cout << "-> Preco do Condominio" << endl;
            cout << "-> Vagas na Garagem" << "\n\n";

            ap->setTipo("i001");
            fflush(stdin);
            getline(cin, stream);
            ap->setTitulo(stream);
            fflush(stdin);
            getline(cin, stream);
            ap->setCidade(stream);
            fflush(stdin);
            getline(cin, stream);
            ap->setBairro(stream);
            fflush(stdin);
            getline(cin, stream);
            ap->setLogradouro(stream);
            fflush(stdin);
            getline(cin, stream);
            ap->setNumero(stream);
            fflush(stdin);
            getline(cin, stream);
            ap->setCep(stream);
            cin >> numero;
            ap->setAluga_vende(numero);
            cin >> valor;
            ap->setPrecoVenda(valor);
            cin >> valor;
            ap->setPrecoAluguel(valor);
            cin >> valor;
            ap->setArea(valor);
            cin >> numero;
            ap->setQuartos(numero);
            fflush(stdin);
            getline(cin, stream);
            ap->setPosicao(stream);
            cin >> numero;
            ap->setAndar(numero);
            cin >> valor;
            ap->setCondominio(valor);
            cin >> numero;
            ap->setGaragem(numero);
            cout << "\nApartamento Adicionado com Sucesso!\n\n";

            listaImoveis.push_back(ap);
            break;

        case 2:
            cout << "-> Titulo" << endl;
            cout << "-> Cidade" << endl;
            cout << "-> Bairro" << endl;
            cout << "-> Logradouro" << endl;
            cout << "-> Numero" << endl;
            cout << "-> CEP" << endl;
            cout << "-> 0. Aluga 1. Vende" << endl;
            cout << "-> Preco de Venda" << endl;
            cout << "-> Preco do Aluguel" << endl;
            cout << "-> Area do Terreno" << "\n\n";

            terreno->setTipo("i002");
            fflush(stdin);
            getline(cin, stream);
            terreno->setTitulo(stream);
            fflush(stdin);
            getline(cin, stream);
            terreno->setCidade(stream);
            fflush(stdin);
            getline(cin, stream);
            terreno->setBairro(stream);
            fflush(stdin);
            getline(cin, stream);
            terreno->setLogradouro(stream);
            fflush(stdin);
            getline(cin, stream);
            terreno->setNumero(stream);
            fflush(stdin);
            getline(cin, stream);
            terreno->setCep(stream);
            cin >> numero;
            terreno->setAluga_vende(numero);
            cin >> valor;
            terreno->setPrecoVenda(valor);
            cin >> valor;
            terreno->setPrecoAluguel(valor);
            cin >> valor;
            terreno->setAreaTerreno(valor);
            cout << "\nTerreno Adicionado com Sucesso!\n\n";

            listaImoveis.push_back(terreno);
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

    string seletor;
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
            cout << "Qual Tipo Deseja Pesquisar?" << endl;
            cout << "i000. Casa" << endl;
            cout << "i001. Apartamento" << endl;
            cout << "i002. Terreno" << endl;
            cout << "Escolha: ";
            cin >> seletor;
            cout << endl;

            for(int i = 0; i < elementos; i++){
                if(seletor == listaImoveis[i]->getTipo())
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
    string stream;
    int numero;
    float valor;
    int id;
    int opcao;

    buscar(listaImoveis);
    cout << "Digite o ID do Imovel que Deseja Editar: ";
    cin >> id;
    cout << endl;

    int caso = -1;
    if(listaImoveis[id]->getTipo() == "i000")
        caso = 0;
    else if(listaImoveis[id]->getTipo() == "i001")
        caso = 1;
    if(listaImoveis[id]->getTipo() == "i002")
        caso = 2;

    switch(caso){
        case 0:
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

            switch(opcao){
                case 1:
                    cout << "Novo Titulo: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setTitulo(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 2:
                    cout << "Nova Cidade: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setCidade(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 3:
                    cout << "Novo Bairro: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setBairro(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 4:
                    cout << "Novo Logradouro: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setLogradouro(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 5:
                    cout << "Novo Numero: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setNumero(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 6:
                    cout << "Novo CEP: ";
                    fflush(stdin);
                    getline(cin, stream);
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
                    cout << "Novo Numero de Pavimentos: ";
                    cin >> numero;
                    cout << endl;
                    ((Casa*)listaImoveis[id])->setPavimentos(numero);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 11:
                    cout << "Novo Numero de Quartos: ";
                    cin >> numero;
                    cout << endl;
                    ((Casa*)listaImoveis[id])->setQuartos(numero);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 12:
                    cout << "Nova Area do Terreno: ";
                    cin >> valor;
                    cout << endl;
                    ((Casa*)listaImoveis[id])->setAreaTerreno(valor);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 13:
                    cout << "Nova Area Construida: ";
                    cin >> valor;
                    cout << endl;
                    ((Casa*)listaImoveis[id])->setAreaConstruida(valor);
                    cout << "Alteracao Efetuada\n\n";
                    break;
            }

            break;

        case 1:

            cout << "01. Editar Titulo" << endl;
            cout << "02. Editar Cidade" << endl;
            cout << "03. Editar Bairro" << endl;
            cout << "04. Editar Logradouro" << endl;
            cout << "05. Editar Numero" << endl;
            cout << "06. Editar CEP" << endl;
            cout << "07. Editar Aluga ou Vende" << endl;
            cout << "08. Preco do Aluguel" << endl;
            cout << "09. Preco de Venda" << endl;
            cout << "10. Editar Area" << endl;
            cout << "11. Numero de Quartos" << endl;
            cout << "12. Editar Posicao" << endl;
            cout << "13. Editar Andar" << endl;
            cout << "14. Editar Valor do Condominio" << endl;
            cout << "15. Editar Quantidade de Vagas de Garagem" << endl;
            cout << "Digite a Opcao Desejada: ";
            cin >> opcao;
            cout << endl;

            switch(opcao){
                case 1:
                    cout << "Novo Titulo: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setTitulo(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 2:
                    cout << "Nova Cidade: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setCidade(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 3:
                    cout << "Novo Bairro: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setBairro(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 4:
                    cout << "Novo Logradouro: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setLogradouro(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 5:
                    cout << "Novo Numero: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setNumero(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 6:
                    cout << "Novo CEP: ";
                    fflush(stdin);
                    getline(cin, stream);
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
                    cout << "Nova Area: ";
                    cin >> valor;
                    cout << endl;
                    ((Apartamento*)listaImoveis[id])->setArea(valor);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 11:
                    cout << "Novo Numero de Quartos: ";
                    cin >> numero;
                    cout << endl;
                    ((Apartamento*)listaImoveis[id])->setQuartos(numero);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 12:
                    cout << "Editar Posicao: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    ((Apartamento*)listaImoveis[id])->setPosicao(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 13:
                    cout << "Novo Andar: ";
                    cin >> numero;
                    cout << endl;
                    ((Apartamento*)listaImoveis[id])->setAndar(numero);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 14:
                    cout << "Novo Valor do Condominio: ";
                    cin >> valor;
                    cout << endl;
                    ((Apartamento*)listaImoveis[id])->setCondominio(valor);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 15:
                    cout << "Nova Quantidade de Vagas na Garagem: ";
                    cin >> numero;
                    cout << endl;
                    ((Apartamento*)listaImoveis[id])->setGaragem(numero);
                    cout << "Alteracao Efetuada\n\n";
                    break;
            }

            break;

        case 2:
            //int opcao;

            cout << "01. Editar Titulo" << endl;
            cout << "02. Editar Cidade" << endl;
            cout << "03. Editar Bairro" << endl;
            cout << "04. Editar Logradouro" << endl;
            cout << "05. Editar Numero" << endl;
            cout << "06. Editar CEP" << endl;
            cout << "07. Editar Aluga ou Vende" << endl;
            cout << "08. Preco do Aluguel" << endl;
            cout << "09. Preco de Venda" << endl;
            cout << "10. Area do Terreno" << endl;
            cout << "Digite a Opcao Desejada: ";
            cin >> opcao;
            cout << endl;

            switch(opcao){
                case 1:
                    cout << "Novo Titulo: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setTitulo(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 2:
                    cout << "Nova Cidade: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setCidade(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 3:
                    cout << "Novo Bairro: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setBairro(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 4:
                    cout << "Novo Logradouro: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setLogradouro(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 5:
                    cout << "Novo Numero: ";
                    fflush(stdin);
                    getline(cin, stream);
                    cout << endl;
                    listaImoveis[id]->setNumero(stream);
                    cout << "Alteracao Efetuada\n\n";
                    break;
                case 6:
                    cout << "Novo CEP: ";
                    fflush(stdin);
                    getline(cin, stream);
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
                    cout << "Nova Area do Terreno: ";
                    cin >> valor;
                    cout << endl;
                    ((Terreno*)listaImoveis[id])->setAreaTerreno(valor);
                    cout << "Alteracao Efetuada\n\n";
                    break;
            }
    }

}



int menu(vector<Imovel*> &listaImoveis){
    int opcao;
    int flag = 1;

    cout << "Qual Operacao Deseja Realizar?" << endl;
    cout << "1. Inserir Imovel" << endl;
    cout << "2. Listar Imovel" << endl;
    cout << "3. Buscar Imovel" << endl;
    cout << "4. Remover Imovel" << endl;
    cout << "5. Editar Imovel" << endl;
    cout << "6. Sair/Salvar em Arquivo" << endl;
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

        //case 7:
            //lerArquivo(listaImoveis);
            //break;

        case 6:
            salvaArquivo(listaImoveis);
            flag = 0;
            break;
    }
    return flag;
}

int main(){
    vector<Imovel*> listaImoveis;
    int flag = 1;

    Terreno terreno("i002", "Terreno Legal em Mangabeira", "Joao Pessoa", "Mangabeira", "Estudante Marizete",
                  "246", "58058-300", 0, -1, 520.24, 250);

    //imovel.show();

    Casa casa("i000", "Casa Bonita na Torre", "Joao Pessoa", "Torre", "Geminiano da Franca", "231", "58040-560", 1,
              300000.78, -1, 1, 3, 320.42, 280.00);

    casa.setAluga_vende(0);
    casa.setPrecoAluguel(370.44);
    casa.setPrecoVenda(-1);
    casa.setPavimentos(2);


    //casa.show();

    Apartamento ap("i001", "Apartamento Luxuoso", "Joao Pessoa", "Manaira", "Rua da Soberba", "621", "58058-621",
                   1, 950000, -1, 350, 5, "Nascente do Poente", 7, 932.47, 2);

    //listaImoveis.push_back(&terreno);
    //listaImoveis.push_back(&casa);
    //listaImoveis.push_back(&ap);
    //ap.show();

    lerArquivo(listaImoveis);
    while(flag)
        flag = menu(listaImoveis);

    cout << "Obrigado pela Utilizacao!" << endl;

    return 0;
}
