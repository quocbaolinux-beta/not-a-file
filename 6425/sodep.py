import math
import os
import sys
oin = open("sodep.inp", "r")
oout = open("sodep.out", "w")
# import math
def tongchuso(n):
    s = 0
    while n > 0:
        s += n % 10
        n //= 10
    return s

if __name__ == "__main__":
    n = oin.read()
    tongcs=tongchuso(int(n))
    if tongcs % 10 == 9:
        oout.write(1)
    else:
        oout.write(0)
