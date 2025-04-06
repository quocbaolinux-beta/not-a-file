import math

n, m, a = map(int, input().split())

tle = math.ceil(n / a) * math.ceil(m / a)

print(tle)