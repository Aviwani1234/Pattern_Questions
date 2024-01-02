n = 5
for i in range(n):
    
    k = i + 1
    for j in range(i+1):
        print(k,end=" ")
    
    num = k+1
    a = 1
    while(a<n-i):
        print(num,end=" ")
        num = num + 1
        a = a + 1
  
    print('\r')
    

        
        
