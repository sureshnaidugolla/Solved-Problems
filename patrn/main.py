n=10
for i in range(n):
    k=i+1
    for j in range(0,i+1):
        print(k,end=" ")
        k=k+n-j-1
    print()
    