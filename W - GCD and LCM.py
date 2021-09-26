t=int(input())
for i in range(t):
    num=[int(x) for x in input().split()]
    n=min(num)
    m=max(num)
    mu=n*m
    while(m):
        n,m=m,n%m
    h=n
    lcm=mu/n
    print(h,int(lcm))
