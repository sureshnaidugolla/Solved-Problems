n,k=map(int ,input().split())
its=list(map(int ,input().split()))
pts=list(map(int ,input().split()))
for i in range(len(its)-1):
    if(its[i]<its[i+1]):
        a=its[i]
        its[i]=its[i+1]
        its[i+1]=a
        a=pts[i]
        pts[i]=pts[i+1]
        pts[i+1]=a
p=0
i=0
while(n>0):
    if(its[i]<=n):
        p=p+pts[i]
        n=n-its[i]
    else:
        i=i+1
print(p)