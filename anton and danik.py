num_games=int(input())
outcomes=input()
if outcomes.count('A')>outcomes.count('D'):
    print("Anton")
elif outcomes.count('A')<outcomes.count('D'):
    print("Danik")
else:
    print("Friendship")
