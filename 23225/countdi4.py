import sys
import math

sys.stdin('countdi4.inp', 'r')
sys.stdout('countdi4.out', 'w')

n=int(input())
s=math.factorial(n)
dem=0
for i in range (1, n):
    if(n%i==0):
        dem+=1
print(dem)