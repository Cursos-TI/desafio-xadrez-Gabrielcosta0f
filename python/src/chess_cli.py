from chess import *
MENU="""[1] Bispo [2] Torre [3] Rainha [4] Cavalo BE [5] Cavalo CD [0] Sair Escolha: """
def run():
 while True:
  op=input(MENU).strip()
  if op=="0":break
  if op=="1":imprimir(movimentos_bispo_diag_sup_dir(5))
  elif op=="2":imprimir(movimentos_torre_direita(5))
  elif op=="3":imprimir(movimentos_rainha_esquerda(8))
  elif op=="4":imprimir(movimentos_cavalo_baixo_esquerda())
  elif op=="5":imprimir(movimentos_cavalo_cima_direita())
if __name__=="__main__": run()