P,K=map(int,input().split())#K=int(input())


i=2
a=True

while(i<K):
    if(P%i==0):
        print('BAD '+'%d' %i)
        a=False
        break
    else: i+=1;

if a: print('GOOD')
