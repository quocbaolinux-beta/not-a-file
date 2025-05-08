import sys
sys.stdin = open("bai2.inp", "r")
sys.stdout = open("bai2.out", "w")
n = int(input())
n/=9
print(9*n*(n+1)//2)