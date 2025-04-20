# Số chữ số mong muốn
n = 300

# Số nhỏ nhất có 300 chữ số là 1 theo sau là 299 số 0
so_300_chu_so = "1" + "0" * (n - 1)

# Ghi vào file 300_digit_number.txt
with open("300_digit_number.txt", "w") as file:
    file.write(so_300_chu_so)

print("Đã ghi số có 300 chữ số vào file '300_digit_number.txt'")
