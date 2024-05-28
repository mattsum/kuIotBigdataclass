import csv


def main():
    filename = "/home/matt/바탕화면/kuIotBigdataclass/python/chap13/CSV/customers.csv"
    with open(filename, "r") as f:
        reader = csv.reader(f, delimiter=",", quotechar="'", quoting=csv.QUOTE_MINIMAL)
        for c in reader:
            print(c)
    

if __name__ == "__main__":
    main()