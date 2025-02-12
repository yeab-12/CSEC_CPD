n = int(raw_input())
magnets = [raw_input().strip() for _ in range(n)]
group_count = 1
for i in range(1, n):
    if magnets[i] != magnets[i - 1]:
        group_count += 1
print(group_count)
