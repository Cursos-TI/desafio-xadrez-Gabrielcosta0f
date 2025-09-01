#include <stdio.h>
int main(void) {
    const int PASSOS_BISPO=5, PASSOS_TORRE=5, PASSOS_RAINHA=8;
    for(int i=0;i<PASSOS_BISPO;i++){ printf("Cima\n"); printf("Direita\n"); }
    printf("---\n");
    int t=0; while(t<PASSOS_TORRE){ printf("Direita\n"); t++; }
    printf("---\n");
    int r=0; do{ printf("Esquerda\n"); r++; }while(r<PASSOS_RAINHA);
    return 0;
}