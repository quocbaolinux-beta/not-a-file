with open("bai1.inp", "r") as fi:
    n = int(fi.read())

A = 0
for i in range(1, 2 * n):
    A += i / (i + 5)

B = 0
p = 1
for i in range(1, 2 * n + 2):
    p /= 7
    if i % 2 == 1:
        B += i * p
    else:
        B -= i * p
with open("bai1.out", "w") as fo:
    fo.write(f"{A:.5f}\n")
    fo.write(f"{B:.5f}\n")
