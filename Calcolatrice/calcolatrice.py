def Calcolo(a,b,operazione):
    match(operazione):
        case "+":
            return a+b
        case "-":
            return a-b
        case "*":
            return a*b
        case "/":
            if(b == 0):
                return "divisione per 0"
            else:
                return a/b

if __name__ == "__main__":
    a = float(input("inserisci il primo numero"))
    b = float(input("inserisci il secondo numero"))
    operazione = str(input("inserisci l'operazione (+ - * /)"))
    print(Calcolo(a,b,operazione))
    print("aaaaaaaaa")
