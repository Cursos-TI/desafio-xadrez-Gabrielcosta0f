#include <stdio.h>
void mover_torre_direita_rec(int p){ if(p<=0)return; printf("Direita\n"); mover_torre_direita_rec(p-1); }
void mover_rainha_esquerda_rec(int p){ if(p<=0)return; printf("Esquerda\n"); mover_rainha_esquerda_rec(p-1); }
void mover_bispo_diag_sup_dir_rec(int p){ if(p<=0)return; for(int k=0;k<2;k++){ if(k==0) printf("Cima\n"); else printf("Direita\n"); } mover_bispo_diag_sup_dir_rec(p-1); }
void mover_cavalo_cima_direita(){ int cima=0,direita=0; for(; (cima<2)||(direita<1);){ if(cima<2){ printf("Cima\n"); cima++; continue; } if(direita<1){ printf("Direita\n"); direita++; } else break; } }
int main(void){ mover_bispo_diag_sup_dir_rec(5); printf("---\n"); mover_torre_direita_rec(5); printf("---\n"); mover_rainha_esquerda_rec(8); printf("---\n"); mover_cavalo_cima_direita(); return 0; }