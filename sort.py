num = int(input("How many figures : ")) 
storage = []
value = []

for i in range(1,number+1):
    a = int(input("Enter value" + str(i) + " : "))
    storage.append(a) 

for m in range(len(storage)):
    b = min(storage)
    storage.remove(b)
    value.append(b) 
k = ' '.join(str(i) for i in value)
print(k)
