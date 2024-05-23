def min():
    print("구구단 몇 단을 계산할까요")
    user_input = int(input())
    print(f"구구단 {user_input}단을 계산합니다.")
    for i in range(1, 10):
        print(f"{user_input} X {i} = {user_input * i}")


if __name__ == "__main__":
    min()