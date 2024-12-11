"""a = int(input("Enter a number : "))

for i in range(a):
    if a >= 2:
        a = a - 2
    else:
        break

if a == 1:
    print("odd")

else:
    print("even")"""

a = int(input("Enter a number : "))

if (a & 1) == 0:
    print("Even")
else: print("Odd")
