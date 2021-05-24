def Solve(N,K,arr):
  posible=True
  A=[-1]*N
  candidatos=[i+1 for i in range(K)]
  ind=[i for i in range(N)]
  memo={}
  M=len(arr)
  arr=sorted(arr,key=lambda x:x[2])
  for xyz in arr:
    if A[xyz[2]-1]==-1:
      A[xyz[2]-1]=xyz[0]
      ind.remove(xyz[2]-1)
      if xyz[0] not in memo:
        memo[xyz[0]]=1
      else:
        memo[xyz[0]]=memo[xyz[0]]+1
      a=xyz[1]-memo[xyz[0]]
      if a<0:
        posible=False
        break
      for _ in range(a):
        if len(ind)==0:
          posibles=False
          break
        else:
          A[ind[0]]=xyz[0]
          memo[xyz[0]]=memo[xyz[0]]+1
          ind.pop(0)
    else:
      posible=False
      break
  for i in ind:
    a=set(candidatos)-set(A[i:])
    if len(a)==0:
      posible=False
      break
    A[i]=a.pop()
  
  if posible:
    print("YES")
    print(" ".join(list(map(str,A))))
  else:
    print("NO")      


T=int(input().strip())
for _ in range(T):
  ent=list(input().split(" "))
  N=int(ent[0])
  K=int(ent[1])
  M=int(ent[2])
  arr=[]
  for kk in range(M):
    ent=list(map(int,input().split(" ")))
    arr.append(ent)
  Solve(N,K,arr) 
