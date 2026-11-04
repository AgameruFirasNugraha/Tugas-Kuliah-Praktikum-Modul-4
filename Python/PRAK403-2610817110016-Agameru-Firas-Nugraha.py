a, b = map(int, input().split())
i, j = a, b

while True:
    print(f"{i} {j}", end="")
    if i == b and j == a:
        break
    print(" - ", end="")
    if a < b:
        i += 1
        j -= 1
    else:
        i -= 1
        j += 1