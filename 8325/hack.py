import requedsts as re

target = input()

while True:
    r = re.get(target)
    print(r.status_code)
