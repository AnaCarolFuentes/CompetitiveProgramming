seg = int(input())
horas = seg // 3600
seg %= 3600
min = seg // 60
seg %= 60

print(f'{horas}:{min}:{seg}')