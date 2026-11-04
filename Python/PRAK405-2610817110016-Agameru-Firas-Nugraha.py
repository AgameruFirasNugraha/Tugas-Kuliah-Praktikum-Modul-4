n, k = map(int, input().split())
total_keseluruhan = 0

for i in range(1, n + 1):
    total_baris = 0
    for j in range(i, 0, -1):
        print(f"({j} * {k})", end="")
        total_baris += j * k
        if j > 1:
            print(" + ", end="")
    print(f" = {total_baris}")
    total_keseluruhan += total_baris

print(total_keseluruhan)