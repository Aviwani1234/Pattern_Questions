n = 5
asciiValue = 65
for i in range(n):

    for j in range(int((n+(n/2)+2)/2),i,-1):
        print(end=" ")

    for k in range(i):
        print(chr(asciiValue),end=" ")
        asciiValue = asciiValue + 1
    
    print('\r')
    
