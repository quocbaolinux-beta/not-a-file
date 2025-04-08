with open('FCUT.inp','r') as fi , open('FCUT.out','w') as fo:
    n , k = map(int,fi.readline().split())
    arr = [0] + list(map(int,fi.readline().split()))
    for i in range(1,n+1):
        arr[i] = arr[i-1] + arr[i]
    dp = [0]*(n+1)
    deque = []
    for i in range(k):
        dp[i] = arr[i]
        while deque and arr[i+1] - dp[i] <  arr[deque[-1] + 1] - dp[deque[-1]]:
            deque.pop()
        deque.append(i)
    for i in range(k,n+1):
        while i - deque[0] > k:
            deque.pop(0)
        dp[i] = arr[i] - (arr[deque[0] + 1] - dp[deque[0]])
        if  i < n:
            while deque and arr[i+1] - dp[i] <  arr[deque[-1] + 1] - dp[deque[-1]]:
                deque.pop()
            deque.append(i)
    fo.write(str(max(dp)))
