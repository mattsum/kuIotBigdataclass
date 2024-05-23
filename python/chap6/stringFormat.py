def main():
    a, b, c = 1, 2, 3
    print("first: %d second: %d thrid: %d" % (a,b,c))
    print(f"first: {a} second: {b} thrid: {c}")
    print("first: {:.2f} second: {:.3f} thrid: {:.3f}".format(a,b,c))
    print(f"first: {2:6.2f} second: {1:6.3f} thrid: {0:6.4f}".format(a,b,c))

if __name__ == "__main__":
    main()