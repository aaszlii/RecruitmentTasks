print("Prosty kalkulator RPN")

def rpn(wejscie):
    stos = []

    for token in wejscie.split():
        if token in ['+', '-', '*', '/']:
            if len(stos)<2:
                return "Błąd. Za mało argumentów."
            b = stos.pop()
            a = stos.pop()

            if token == "+":
                stos.append(a + b)
            elif token == "-":
                stos.append(a - b)
            elif token == "*":
                stos.append(a * b)
            elif token == "/":
                if b == 0:
                    return "Błąd dzielenia."
                stos.append(a / b)
        else:
            try:
                liczba = float(token)
                stos.append(liczba)
            except ValueError:
                return "Błąd. Nieprawidłowy token."
    if len(stos) == 1:
        return stos[0]
    else:
        return "Na stosie jest zbyt wiele wartości."

wejscie = input("Wpisz liczby i znaki oddzielone spacją")
wynik = rpn(wejscie)
print(f"Wynik: {wynik}")
