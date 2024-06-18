c=0
for i in range(int(input())):
    s=list(input())
    dl=[10,20,50,100,200,500]
    l=s[7:len(s)-2:1]
    d=0
    for j in l:
        d=d+int(j)*10
    y=int(s[3])*1000+int(s[4])*100+int(s[5])*10+int(s[6])
    if(9<len(s)<13):
        if(64<ord(s[0])<91 and 64<ord(s[1])<91 and 64<ord(s[2])<91 and (s[0]!=s[1] and s[0]!=s[2] and s[1]!=s[2])):
            if(1900<=y<=2019):
                if(d in dl):
                    if(96<ord(s[0])<123):
                        c=c+1
print(c)
    