s=input()
x=int(input())
count = 0
n = 0
l=len(s)
f= False 
for i in range(l):
    n=n*10+int(s[i])
    if n<=x:
       # print(n)
        f=True 
    else:
        if f:
            count +=1
            n=int(s[i])
            f= False 
        if n<=x:
            f=True
        else:
            n=0
if f==True:
    count +=1
print(count)
