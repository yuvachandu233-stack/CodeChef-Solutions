import math
t=int(input())
for i in range(t):
    n=int(input())
    if (n==1 or n==0):
        print(1)
    else:
        print(math.factorial(n))
        

