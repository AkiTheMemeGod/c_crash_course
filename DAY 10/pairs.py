num = list(map(int, input("enter the array : ").split(",")))
s = int(input("Enter the sum : "))
pair = []
for i in range(0, len(num)):
    for j in range(0,len(num)):
        if num[i]+num[j] == s:
            pair.append((num[i], num[j]))
print(sorted(set(pair)))
