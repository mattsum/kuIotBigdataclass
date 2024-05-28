def call_ten_times(func):
    for _ in range(10):
        func()
def print_hello():
    print("hello")

def main():
    call_ten_times(print_hello)

if __name__ == "__main__":
    main()
