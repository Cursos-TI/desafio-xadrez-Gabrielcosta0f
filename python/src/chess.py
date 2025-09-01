def movimentos_bispo_diag_sup_dir(p): return sum([["Cima","Direita"] for _ in range(p)],[]) 
def movimentos_torre_direita(p): return ["Direita"]*p 
def movimentos_rainha_esquerda(p): return ["Esquerda"]*p 
def movimentos_cavalo_baixo_esquerda(): return ["Baixo","Baixo","Esquerda"] 
def movimentos_cavalo_cima_direita(): return ["Cima","Cima","Direita"] 
def imprimir(seq): 
    for s in seq: print(s)