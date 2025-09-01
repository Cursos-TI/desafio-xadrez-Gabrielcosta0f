#include <stdio.h>
int main(void) {
    const int PASSOS_VERT=2, PASSOS_HORZ=1;
    for(int i=0;i<PASSOS_VERT;i++){ printf("Baixo\n");
        if(i==PASSOS_VERT-1){ int j=0; while(j<PASSOS_HORZ){ printf("Esquerda\n"); j++; } }
    }
    return 0;
}