def latsach(a, b):
    t=a//2
    l=b//2
    r = t - l
    return min(l,r)
with open("bai1.inp", "r") as fi, open("bai1.out", "w") as fo:
    n, m = map(int, fi.readline().split())
    fo.write(latsach(n, m))
    fo.write("\n")