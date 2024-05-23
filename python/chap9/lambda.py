def main():
    def f(x,y):
        return x+y
    f(1,2)
    f2 = lambda x,y: x+y
    print(f2(1,2))

if __name__ == "__main__":
    main()