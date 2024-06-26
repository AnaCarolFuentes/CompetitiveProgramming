#Esse exercicio da p/ ser otimizado 
valor = int(input())

print(valor)

cont_100 = 0
cont_50 = 0
cont_20 = 0
cont_10 = 0
cont_5 = 0
cont_2 = 0
cont_1 = 0

while valor >= 100:
    valor -= 100
    cont_100 += 1

while valor >= 50:
    valor -= 50
    cont_50 += 1

while valor >= 20:
    valor -= 20
    cont_20 += 1

while valor >= 10:
    valor -= 10
    cont_10 += 1

while valor >= 5:
    valor -= 5
    cont_5 += 1

while valor >= 2:
    valor -= 2
    cont_2 += 1

while valor >= 1:
    valor -= 1
    cont_1 += 1

print(cont_100, 'nota(s) de R$ 100,00')
print(cont_50, 'nota(s) de R$ 50,00')
print(cont_20, 'nota(s) de R$ 20,00')
print(cont_10, 'nota(s) de R$ 10,00')
print(cont_5, 'nota(s) de R$ 5,00')
print(cont_2, 'nota(s) de R$ 2,00')
print(cont_1, 'nota(s) de R$ 1,00')

