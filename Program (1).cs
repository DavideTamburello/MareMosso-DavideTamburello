def CHIEDI(lista):
    while len(lista) < 3:
        try:
            num = float(input("inserisci un numero "))
            lista.append(num)
        except ValueError:
            print("non è un numero")
    
    for numero in lista:
        print(numero)

def PULISCI(lista):
    lista_pulita = []
    for numero in lista:
        if numero not in lista_pulita:
            lista_pulita.append(numero)
            
    return lista_pulita
  
numeri = []
CHIEDI(numeri)

lista_pulita = PULISCI(numeri)
for numero in lista_pulita:
    print(numero)