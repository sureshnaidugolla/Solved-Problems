# order of elements increasing equal decreasin
l=[1,2,3,4,4,5,3,2,1]
n=len(l)
t=0
for i in range(n-1):
    if(l[i]<l[i+1] and (t==1 or t==0)):
        t=1
    elif(l[i]==l[i+1] and (t==1 or t==2)):
        t=2
    elif(l[i]>l[i+1] and (t==3 or t==2)):
        t=3
    else:
        t=4
if(t==4):
    print("NO")
else:
    print("yes")