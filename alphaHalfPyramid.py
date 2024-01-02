asciiVal = 65
for i in range(5):

    for j in range (i+1):

        char = chr(asciiVal)
        print(char,end=" ")
        asciiVal = asciiVal + 1
    
    print('\r')