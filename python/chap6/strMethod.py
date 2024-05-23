def main():
    a = str()
    text = "TEAMLAB X Inflearn"
    a = text.upper()
    print(text)
    a = text.lower()
    print(a)
    print(text.capitalize())
    print(text.count('A'))
    print(text.isdigit())
    li1 = text.split(sep = 'X')
    print(li1)

if __name__ == "__main__":
    main()