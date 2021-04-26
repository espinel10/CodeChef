
def solve(N):
    ent=list(N)
    salida=None
    i=0
    while i<len(ent)//2:
        j=len(ent) - i -1
        if ent[i]!=ent[j]:
            break
        else:
            i=i+1
    if i==len(ent)//2:
        print("wins")
    else:
        print("loses")
            

T=int(input().strip())
for i in range(1, T+1):
    N=input().strip()
    solve(N)