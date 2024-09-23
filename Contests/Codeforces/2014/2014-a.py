t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    balance = 0
    count = 0
    for i in range(n):
        if(a[i] >= k): balance += a[i]
        elif(a[i] == 0 and balance > 0): 
            balance -= 1
            count += 1
    print(count)
