import random
n = 2*1e9
a = random.randint(1, n)

for i in range(1, 31):
    t=int(input())
    if t == a:
        print("HOLA")
        break
    elif t < a:
        print("BIGGER", flush=True)
    else:
        print("SMALLER", flush=True)

