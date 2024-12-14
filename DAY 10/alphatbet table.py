x = "ZABCDEFGHIJKLMNOPQRSTUVWXY"
n = int(input("enter the number : "))
d = (n // 27) + 1
a = n%26
if d == 1:
    print(x[a])
else:
    print(x[1] + x[a])
