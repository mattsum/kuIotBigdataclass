class Abc:
    pass

def main():
    a = int()
    
    a = 7.1
    a = "Hello, World"
    aStr = "astring"
    aNoIntString = "abcd"
    aYesIntString = "1234"
    a_yes_int_string = "56789"
    o = object()
    print(o)
    print(a)
    print(type(a))
    print(issubclass(type(a), int))
    print(issubclass(type(o), object))
    print(issubclass(type(a), object))
    print(issubclass(int(0), Abc))
if __name__ == "__main__":
    main()