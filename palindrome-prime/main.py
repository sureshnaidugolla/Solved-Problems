#write a python script to display nearest prime which is also a palindrome for the given number
n=int(input())
j=n
while(1):
    p=1
    c=0
    for i in range(2,j):
        if(j%i==0):
            break
    else:
        k=str(j)[::-1]
        if(str(j)==k):
            print(k)
            p=9
    j+=1
    if(p==9):
        break