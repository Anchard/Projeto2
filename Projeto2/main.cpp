#include <iostream>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"

using namespace std;

int main(){
    Imovel imovel("2", "Terreno Legal em Mangabeira", "Joao Pessoa", "Mangabeira", "Estudante Marizete",
                  "246", "58058-300", "0", -1, 520.24);

    imovel.show();

    Casa casa("0", "Casa Bonita na Torre", "Joao Pessoa", "Torre", "Geminiano da Franca", "231", "58040-560", "1",
              300000.78, -1, 1, 3, 320.42, 280.00);

    casa.setAluga_vende("0");
    casa.setPrecoAluguel(370.44);
    casa.setPrecoVenda(-1);
    casa.setPavimentos(2);

    casa.show();

    Apartamento ap("1", "Apartamento Luxuoso", "Joao Pessoa", "Manaira", "Rua da Soberba", "621", "58058-621",
                   "1", 950000, -1, 350, 5, "Nascente do Poente", 7, 932.47, 2);

    ap.show();

    return 0;
}
