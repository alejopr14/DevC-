n = int(input("Ingrese un numero: "))

for i in range (1, n+1):
    for j in range(i):
        print("*", end="")
    print()