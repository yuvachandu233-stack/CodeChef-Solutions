t = int(input())

for _ in range(t):
    x, y, z = map(int, input().split())
    
    travel_time = y // x
    wait_time = z - travel_time
    
    if wait_time < 0:
        wait_time = 0
        
    print(wait_time)
