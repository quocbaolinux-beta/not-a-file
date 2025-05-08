a, b, c = map(int, input().split())
max1=max2=0
if a>b:
    if a>c:
        max1=a
        if b>c:
            max2=b
        else:
            max2=c
    else:
        max1=c
        max2=a
else:
    if b>c:
        max1=b
        if a>c:
            max2=a
        else:
            max2=c
    else:
        max1=c
        max2=a
print(max1+max2)