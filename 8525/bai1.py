a, b=map(int, input().split())
dem=0
dem+=a
dem+=b//3
if b%3!=0:
    dem=dem+1
print(dem)