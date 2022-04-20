import random
import timeit

startTime=timeit.default_timer()
n=int(input()) 
m1=[[None]*n]*n
m2=[[None]*n]*n
ans=[] 

for i in range(n):  
    row=[0]*n 
    ans.append(row)

for i in range(n):
    for j in range(n):
        m1[i][j]=random.randint(1, 100000) 
        m2[i][j]=random.randint(1, 100000)

for j in range(n): 
   for k in range(n): 
      for i in range(n): 
         ans[i][j]+=m1[i][k]*m2[k][j]

for i in ans: 
   print(i)

stopTime=timeit.default_timer()
print('Time:', stopTime-startTime)