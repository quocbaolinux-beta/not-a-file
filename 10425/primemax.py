import math
from math import isqrt
def isprime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.isqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
def genpm(n):
    pm = []
    for i in range(2, n + 1):
        if isprime(i):
            pm.append(i)
    return pm
with open("primemax.inp", "r") as fi:
    n = int(fi.read())
pm = genpm(math.isqrt(n)*2 + 100)
mv, res = 0, (0,0)
for i in range(len(pm)):
    for j in range(i+1, len(pm)):
        p1, p2 = pm[i], pm[j]
        pr = p1 * p2
        if pr <= n and pr > mv:
            mv = pr
            res = (p1, p2)
with open("primemax.out", "w") as fo:
    fo.write(f"{res[0]} {res[1]}\n")

