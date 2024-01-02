n = int(input("Enter value of n: "))
for i in range (n):
    for j in range (i+1):
        print(j+1,end=" ")
    print("\r")