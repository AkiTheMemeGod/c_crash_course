a = [1,2,3,4,5,6]
b = [7,8,9,10,11,12]

c = {}
for i in range(len(a)):
    c[a[i]] = b[i]
print(c)
print(c.keys())
print(c.values())
for i,j in c.items():
    print(i,"==>",j)

