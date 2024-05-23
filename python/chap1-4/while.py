def min():
    i = 1
    while True:
        if i % 2 == 0:
            continue
        print(i)
        if i == 10:
            break
        i += 1

if __name__ == "__main__":
    min()