num = input("Enter the range : ")
prime = []

for i in num:
    j = 0

    for k in range(1,int(i)+1):
        if int(i) % k == 0:
            j += 1
    if j == 2:
        prime.append(i)

print("\nPrime Numbers are : ",prime)
