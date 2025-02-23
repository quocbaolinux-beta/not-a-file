import math

a=int(input())
b=int(input())
c=int(input())
d=int(input())

minn=a
minn=min(minn, b)
minn=min(minn, c)
minn=min(minn, d)

print(minn)