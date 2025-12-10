import calcolatrice
#from calcolatrice import *

if __name__ == "__main__":
    a = float(input("inserisci il primo numero"))
    b = float(input("inserisci il secondo numero"))
    operazione = str(input("inserisci l'operazione (+ - * /)"))

    print(calcolatrice.Calcolo(a,b,operazione))
