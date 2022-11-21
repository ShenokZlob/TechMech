def add(a,l,r,v):
    for i in range(l,r):
        a[i] += i+1

def get_sum(a,l,r):
    s = 0
    for i in range(l,r):
        s += a[i]
    return s

def set(a,l,r,v):
    for i in range(l,r):
        a[i] = v


arr = [0 for i in range(15)]
for i in range(1,12+1):
    add(arr,(3*i)%15,(3*i)%15,i+2)
    set(arr,i,i+2,get_sum(arr,i,i+2) + get_sum(arr,i+1,i+3))
print(get_sum(arr,0,15))
print(get_sum(arr,1,7))
print(get_sum(arr,4,8))
print(get_sum(arr,6,9))

#dont work :(