p=0
q=input("enter the string: ")
num=len(q)
int(num)
for i in range(0,num):
    if (q[i] =='a' or q[i]== 'e' or q[i]=='i' or q[i]=='o' or q[i]=='u'):
        p="yes"
if p=="yes":
    print("yes")
else:
    print("no")    
