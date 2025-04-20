with open("minarray.inp", "r") as fi, open("minarray.out", "w") as fo:
    line = fi.readline().strip()
    n = int(line)
    minn = 1e18
    for i in range(n):
        a = list(map(int, fi.readline().strip().split()))
        if a:
            minn = min(minn, *a) 
        if minn == 1:
            break
    fo.write(str(minn) + "\n")