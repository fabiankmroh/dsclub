import numpy as np

arr = []
nptemp = np.array([])

for i in range(30):
    tmp = int(input())
    arr.append(tmp)

nptemp = np.array(arr)

hightemp = nptemp[nptemp > 25]
print(hightemp)