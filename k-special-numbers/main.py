for i in range(int(input())):
    k=int(input())
    l=int(input())
    r=int(input())
    c=0
    for x in range(l,r+1,1):
        c1=0
        l2=list(map(int,str(x).strip()))
        p=1
        for z in l2:
            if(z%k==p%k):
                c1=c1+1
            p=p+1
        if(p-1==c1):
            c=c+1
    print(c)