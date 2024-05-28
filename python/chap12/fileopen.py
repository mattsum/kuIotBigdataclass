def main():
    filename = "/home/matt/바탕화면/kuIotBigdataclass/python/chap6/yesterday.txt"
    with open(filename, "r") as f:
        while con := f.readline():
            print(con)

if __name__ == "__main__":
    main()