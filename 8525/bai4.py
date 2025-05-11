import math as mp
def demcp(n):
    sum_ = 0
    dem = 0
    i = 1
    while True:
        sq = i * i
        if sum_ + sq > n:
            break
        sum_ += sq
        dem += 1
        i += 1
    return dem
n = int(input())
a = list(map(int, input().split()))
for x in a:
    print(demcp(x), end=' ')
