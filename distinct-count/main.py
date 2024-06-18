for i in range(int(input())):
    n=int(input())
    s=list(input())
    l=list(map(int,input().split()))
    r=[]
    for j in range(n):
        s[l[j]-1]='?'
        s2="".join(s)
        k=s2.split('?')
        ll=[]
        for m in k:
            ll.append(len(set(m)))
        r.append(str(max(ll)))
        if(len(k)==0):
            r.append('0')
        k=[]
    print(" ".join(r))
        