a = [1,5,2,6,3,7,4]
print(a)

c = [0,0,0]
for x in range(3):
    c[x] = list(map(int, input("i, j, k번째 수를 입력 : ").split()))
    
print(c)


def solution():
    for y in range(3):
        b = a[(c[y][0])-1 : c[y][1]]
        b.sort()
        print(b[c[y][2]-1],end=' ')
        
solution()