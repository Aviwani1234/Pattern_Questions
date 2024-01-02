n = int(input())

for i in range(n, 0, -1):

    num = n-i+1
    for j in range(i):

        print(num,end=' ')
    
    print("\r")
