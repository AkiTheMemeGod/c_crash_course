def check(n):
    c = 0
    for i in range(1,n+1):
        if n % i == 0:
            c += 1
    return c == 2


n = int(input("Enter the range : "))
for i in range(1,n+1):
    if check(i):
        print(i)
