fname=input("enter file name:");
num_line=0
with open(fname,'r') as f:
  for line in f:
   num_line += 1
print("number of lines")
print(num_line)
