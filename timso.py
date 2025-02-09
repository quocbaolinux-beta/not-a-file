import sys
import math
#sys.stdin = open('timso.inp', 'r') 
#sys.stdout = open('timso.out', 'w')
a=int(input())
x=int(input())
for i in range(40):
    if(pow(a,i)<=x):
        print(i)
        #sys.exit()
#sys.close()