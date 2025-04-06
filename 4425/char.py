current_letter = input().strip()
if current_letter == 'z':
    next_letter = 'a'  
else:
    next_letter = chr(ord(current_letter) + 1) 
print(next_letter)
