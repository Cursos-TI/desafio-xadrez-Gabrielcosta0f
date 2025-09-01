#include <stdio.h>
// Arquivo completo.c — contém todos os níveis (Novato + Aventureiro + Mestre)
void mover_torre_direita_rec(int p){ if(p<=0)return; printf("Direita\n"); mover_torre_direita_rec(p-1); }
void mover_rainha_esquerda_rec(int p){ if(p<=0)return; printf("Esquerda\n"); mover_rainha_esquerda_rec(p-1); }
void mover_bispo_diag_sup_dir_rec(int p){ if(p<=0)return; for(int k=0;k<2;k++){ if(k==0) printf("Cima\n"); else printf("Direita\n"); } mover_bispo_diag_sup_dir_rec(p-1); }
void mover_cavalo_cima_direita(){ int cima=0,direita=0; for(; (cima<2)||(direita<1);){ if(cima<2){ printf("Cima\n"); cima++; continue; } if(direita<1){ printf("Direita\n"); direita++; } else break; } } 
int main(void){
    const int PASSOS_BISPO=5,PASSOS_TORRE=5,PASSOS_RAINHA=8;
    // Novato
    for(int i=0;i<PASSOS_BISPO;i++){ printf("Cima\n"); printf("Direita\n"); } printf("---\n");
    int t=0; while(t<PASSOS_TORRE){ printf("Direita\n"); t++; } printf("---\n");
    int r=0; do{ printf("Esquerda\n"); r++; }while(r<PASSOS_RAINHA); printf("---\n");
    // Aventureiro
    for(int i=0;i<2;i++){ printf("Baixo\n"); if(i==1){ int j=0; while(j<1){ printf("Esquerda\n"); j++; } } } printf("---\n");
    // Mestre
    mover_bispo_diag_sup_dir_rec(PASSOS_BISPO); printf("---\n"); mover_torre_direita_rec(PASSOS_TORRE); printf("---\n"); mover_rainha_esquerda_rec(PASSOS_RAINHA); printf("---\n"); mover_cavalo_cima_direita();
    return 0;
}