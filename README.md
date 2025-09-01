# Desafio Xadrez — MateCheck

Este repositório contém duas entregas do desafio de Xadrez:

1. **c-niveis/** — Implementação em **C** dos três níveis:
   - `novato.c` → Bispo, Torre e Rainha com **estruturas de repetição**.
   - `aventureiro.c` → Cavalo (baixo + esquerda) com **loops aninhados**.
   - `mestre.c` → Bispo, Torre e Rainha com **funções recursivas** + Cavalo (cima + direita) com múltiplas condições.
   - **`completo.c` → versão única** com **todos os níveis juntos** (Novato + Aventureiro + Mestre).
   
2. **python/** — Versão **Python (CLI)** que imprime as direções de movimento das peças e possui **testes automatizados com pytest**.

---

## ▶️ Como compilar e executar (C)

Entre na pasta `c-niveis/`:

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

No Windows (cmd):
```bat
gcc completo.c -o xadrez && xadrez.exe
```

---

## ▶️ Como rodar (Python)

Entre na pasta `python/`:

```bash
pip install -r requirements.txt
python src/chess_cli.py
```

Menu:
- 1: Bispo (5× Cima + Direita)
- 2: Torre (5× Direita)
- 3: Rainha (8× Esquerda)
- 4: Cavalo (Baixo + Baixo + Esquerda)
- 5: Cavalo (Cima + Cima + Direita)

### Testes
```bash
pytest -q
```

---

## ⚙️ Integração Contínua (CI)

O repositório possui GitHub Actions configurado em `.github/workflows/tests.yml`  
para rodar os testes da versão **Python** automaticamente a cada push/PR.  
Se aparecer **verde ✅** na aba *Actions*, significa que os testes passaram.

---

## 📚 Observações

- Entradas são definidas como **constantes** no código C (sem scanf), conforme enunciado.  
- Todos os arquivos estão comentados e organizados para fácil manutenção.  
- A entrega cobre **Novato, Aventureiro e Mestre**, em **C** e **Python**.
