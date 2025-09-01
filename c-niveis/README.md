# Desafio Xadrez — MateCheck (C)

Três níveis usando **loops**, **loops aninhados** e **recursão**.  
As saídas seguem o padrão:

```
printf("Cima\n");
printf("Baixo\n");
printf("Esquerda\n");
printf("Direita\n");
```

## 📂 Arquivos

- **novato.c** → Bispo, Torre e Rainha com **estruturas de repetição**.  
- **aventureiro.c** → Cavalo em L (baixo + esquerda) com **loops aninhados**.  
- **mestre.c** → Bispo, Torre e Rainha com **funções recursivas** + Cavalo (cima + direita) com múltiplas condições.  
- **completo.c** → versão única contendo **todos os níveis** juntos.

## ▶️ Como compilar e executar

### Arquivos separados
```bash
gcc novato.c -o novato && ./novato
gcc aventureiro.c -o aventureiro && ./aventureiro
gcc mestre.c -o mestre && ./mestre
```

### Arquivo único (`completo.c`)
```bash
gcc completo.c -o xadrez && ./xadrez
```
