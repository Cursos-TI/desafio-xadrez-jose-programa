#include <stdio.h>


#define MOVIMENTOS_TORRE 4
#define MOVIMENTOS_BISPO 4
#define MOVIMENTOS_CAVALO 8
#define MOVIMENTOS_RAINHA 8


void moverTorre(int casas) {
    if (casas <= 0) return; 
    
    printf("Direita\n");
    moverTorre(casas - 1); 
}

void moverBispo(int casas) {
    if (casas <= 0) return; 
    

    for (int i = 0; i < 1; i++) {
        
        for (int j = 0; j < 1; j++) {
            printf("Diagonal Superior Direita\n");
        }
    }
    
    moverBispo(casas - 1); 
}

void moverCavalo() {

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            if (i == 0 && j == 0) continue; 
            
            printf("Movimento em L: ");
            if (i == 1) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
            
            
            if (i == 1 && j == 0) break;
        }
    }
}


void moverRainha(int casas) {
    if (casas <= 0) return; 
    
    
    if (casas % 2 == 0) {
        printf("Cima\n");
    } else {
        printf("Diagonal Superior Direita\n");
    }
    
    moverRainha(casas - 1); 
}

int main() {
    printf("Movimentos da Torre:\n");
    moverTorre(MOVIMENTOS_TORRE);
    printf("\n");
    
    printf("Movimentos do Bispo:\n");
    moverBispo(MOVIMENTOS_BISPO);
    printf("\n");
    
    printf("Movimentos do Cavalo:\n");
    moverCavalo();
    printf("\n");
    
    printf("Movimentos da Rainha:\n");
    moverRainha(MOVIMENTOS_RAINHA);
    printf("\n");
    
    return 0;
}