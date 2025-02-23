import math

def isprime(n):
    if n in [2, 3]:
        return 1
    if (n == 1) or (n % 2 == 0):
        return 0
    r = 3
    while r * r <= n:
        if n % r == 0:
            return 0
        r += 2
    return 1

while(True):
    n=int(input())
    print(isprime(n), "\n")


