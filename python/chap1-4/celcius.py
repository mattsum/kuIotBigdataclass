def min():
    while True:
        try:
            celsius = input("숫자만 넣어주세요")
            fahrenheit = (float(celsius) * 9/5) + 32
            break
        except ValueError:
            print("숫자만 넣어세요.")
            continue
    fahrenheit = (float(celsius) * 9/5) + 32
    print(f"섭씨온도 {celsius:3.02}는 화씨온도 {fahrenheit:3.02}입니다.")

if __name__ == "__main__":
    min()