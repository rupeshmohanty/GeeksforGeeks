q = int(input())

for _ in range(q):
    l1,r1,l2,r2 = map(int,input().split())
    
    if(r1 != l2):
        print(r1,l2)
    else:
        print(l1,r2)