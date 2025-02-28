#include <stdio.h>

struct Produto
{
    int codigo;
    char descricao[50];
    float precoCompra;
    float precoVenda;
    int quantidadeEstoque;
    int estoqueMinimo;
};

void cadastrarProdutos(struct Produto produtos[2]){
    for(int i=0; i<2; i++){
        printf("cadastro produto");
        printf("codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("descrição: ");
        scanf(" %[^\n]", produtos[i].descricao);
        printf("preço de compra: ");
        scanf("%f", &produtos[i].precoCompra);
        printf(" preço de venda: ");
        scanf("%f", &produtos[i].precoVenda);
        printf("quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidadeEstoque);
        printf("estoque minimo: ");
        scanf("%d", &produtos[i].estoqueMinimo);
        printf("\n");
    }
};

void mostrarLucro(struct Produto produtos){
    float lucro = produtos.precoVenda - produtos.precoCompra;
    float percentual = (lucro / produtos.precoCompra) * 100;
    printf("lucro: %s: R$ %.2f (%.2f%%)\n", produtos.descricao, lucro, percentual);
};

void mostrarEstoqueBaixo(struct Produto produtos[2]){
    printf("produtos com estoque baixo: \n");
    for (int i=0; i<2;i++){
        if(produtos[i].quantidadeEstoque < produtos[i].estoqueMinimo){
            printf("codigo: %d, descricao: %s, estoque: %d\n",
                produtos[i].codigo, produtos[i].descricao,
                produtos[i].quantidadeEstoque);
        }
    }
};

int main(){
    struct Produto produtos[2];

    cadastrarProdutos(produtos);
    for (int i=0; i<2; i++){
        mostrarLucro(produtos[i]);
    }

    mostrarEstoqueBaixo(produtos);


    return 0;
}
