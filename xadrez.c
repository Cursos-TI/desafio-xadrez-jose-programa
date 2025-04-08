#include <stdio.h>

int main() {
    
    printf("Movimento da Torre:\n");
    for(int i = 0; i < 5; i++) {
        printf("Cima\n");
    }
    
    
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while(i < 5) {
        printf("Direita\n");
        i++;
    }
    
    
    printf("\nMovimento do Cavalo:\n");
    
    
    const int passos_baixo = 2;  
    const int passos_esquerda = 1; 
    
    
    for(int j = 0; j < passos_baixo; j++) {
        printf("Baixo\n");
    }
    
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while(k < passos_esquerda);
    
    return 0;
}