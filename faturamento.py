vet = [22174.1664, 24537.6698, 26139.6134, 0, 0, 26742.6612, 0, 42889.2258, 46251.174, 11191.4722, 0, 0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0, 0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0, 0, 25681.8318, 1718.1221, 13220.495, 8414.61]
mini = min(vet)
maxi = max(vet)
print("Menor valor de faturamento: ", mini, "\nMaior valor de faturamento: ", maxi)
dias = 0
total = 0
media = 0
cont = 0
for i in vet:
    total = total + i
    if i > 0 :
        dias = dias + 1
media = total / dias
for i in vet:
    if i>media:
        cont = cont + 1
print("\nO faturamento diário foi superior à média mensal em ", cont, " dias")