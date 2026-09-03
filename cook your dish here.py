# cook your dish here
t=int(input())
for i in range(t):
    x,y=map(int,input().split())
    l_needed=max(0,x-y)
    r_needed=x
    print(l_needed+r_needed)