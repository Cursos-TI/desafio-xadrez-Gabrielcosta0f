import sys,os; sys.path.insert(0,os.path.abspath(os.path.join(os.path.dirname(__file__),'..','src')))
from chess import *
def test_all():
 assert movimentos_bispo_diag_sup_dir(2)==["Cima","Direita","Cima","Direita"]
 assert movimentos_torre_direita(3)==["Direita"]*3
 assert movimentos_rainha_esquerda(2)==["Esquerda","Esquerda"]
 assert movimentos_cavalo_baixo_esquerda()==["Baixo","Baixo","Esquerda"]
 assert movimentos_cavalo_cima_direita()==["Cima","Cima","Direita"]