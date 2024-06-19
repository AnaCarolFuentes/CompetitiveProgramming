
dias = int(input())
print(dias // 365, 'ano(s)')
dias %= 365
print(dias // 30, 'mes(es)')
dias %= 30
print(dias % 30, 'dia(s)')