import math
n, m = int(input()), int(input())
kq=math.gcd(n, m)
if kq==1: print(-1)
else: print(kq)