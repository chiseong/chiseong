arr = [1, 1]
n = int(input("조각 수를 입력하세요"))
for i in range(2, n+1):
    arr.append(0)
    arr[i] = arr[i-2] + arr[i-1]
print(arr[n])