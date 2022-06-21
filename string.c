#include <stdio.h>
#include <string.h>
void inversor(char vet[]){
    int i, aux, fim, tam = strlen(vet);

    fim = tam - 1; // índice do último caracter
    for(i = 0; i < tam/2; i++){
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
}
int main() {
    char str[50] = "palavra";
    inversor(str);
    printf("%s", str);
    return 0;
}