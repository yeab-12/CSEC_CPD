n = int(input())
columns = list(map(int, input().split()))
columns.sort()
print(*columns)
