def print_something(my_name, your_name):
    print(f"Hello {your_name}, my name is {my_name}")

def print_somthing2(my_name, your_name = "TEAMlAB"):
    print(f"Hello {your_name}, my name is {my_name}")

def main():
    print_something("Sungchul", "TEAMlAB")
    print_something(your_name="TEAMlAB", my_name="Sungchul")
    print()
    print_somthing2("Sungchul", "BINDSOFT")
    print_somthing2("Sungchul")

if __name__ == "__main__":
    main()