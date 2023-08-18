#include "Util.h"

int main(int argc, char const *argv[]){
    
    char nome[50];
    printf("Digite seu nome: ");
    fgets(nome, 40, stdin);

    imprime(nome);
    
    return 0;
}
