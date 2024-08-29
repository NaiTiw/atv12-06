#include<stdio.h>
#define N 500

struct Livro {
    char titulo[100];
    char autor[100];
    int paginas;

    void ler() {
        printf("Digite o titulo do livro: ");
        scanf("%[^\n]%*c", titulo);
        printf("Digite o autor do livro: ");
        scanf("%[^\n]%*c", autor);
        printf("Digite o preco: ");
        scanf("%d%*c", &paginas);
    }

    void imprimir() {
        printf("Nome: %s\n", titulo);
        printf("Nome: %s\n", autor);
        printf("Quantidade de paginas: %d\n", paginas);
    }

};

struct Venda {

    char cliente[100];
    int qtdProdutos;
    Produto produtos[20];

    void ler() {
        printf("Digite o cliente: ");
        scanf("%[^\n]%*c", cliente);
        printf("Digite a quantidade de itens: ");
        scanf("%d%*c", &qtdProdutos);
        for (int i = 0; i < qtdProdutos; i++) {
            produtos[i].ler();
        }
    }

    void imprimir() {
        printf("Cliente: %s\n", cliente);
        printf("Qtd de itens: %d\n", qtdProdutos);
        for (int i = 0; i < qtdProdutos; i++) {
            produtos[i].imprimir();
        }
        printf("Total da venda: R$ %.2lf\n", totalVenda());
    }

    double totalVenda() {
        double t = 0;
        for (int i = 0; i < qtdProdutos; i++) {
            t += produtos[i].preco;
        }
        return t;
    }

};

int main() {

    Venda v;

    v.ler();
    v.imprimir();

    return 0;
}

