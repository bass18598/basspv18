a=[]
m=int(input("Enter number of elements:"))
for i in range(1,m+1):
    c=int(input("enter number:"))
    a.append(c)
a.sort()
print("large number is:",a[m-1])
