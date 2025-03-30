def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    m, n, k, q = map(int, data[:4])
    x = [0] * k
    y = [0] * k
    
    index = 4
    for i in range(k):
        x[i], y[i] = map(int, data[index:index+2])
        index += 2
    
    results = []
    for _ in range(q):
        u1, v1, u2, v2 = map(int, data[index:index+4])
        index += 4
        cnt = 0
        for j in range(k):
            if u1 <= x[j] <= u2 and v1 <= y[j] <= v2:
                cnt += 1
        results.append(cnt)
    
    sys.stdout.write("\n".join(map(str, results)) + "\n")

if __name__ == "__main__":
    main()