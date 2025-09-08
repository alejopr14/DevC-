vocales = input("Ingrese una palabra: ")
contador = 0
for letra in vocales:
    if letra.lower() in "aeiou":
        contador += 1
print("Cantidad de vocales:", contador)