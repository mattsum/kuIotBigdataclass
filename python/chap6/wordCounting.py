def main():
    folder = "/home/matt/바탕화면/kuIotBigdataclass/python/chap6/"
    with open(folder + "yesterday.txt", "r") as f:
        #yesterday_lyric = f.readlines()
        yesterday_lyric = f.read()
        # contents = ""
    # for line in yesterday_lyric:
    # contents += line.strip() + "\n"

    n_of_yesterday = yesterday_lyric.upper().count("YESTERDAY")
    print(f"Number of yesterday: {n_of_yesterday}")

if __name__ == "__main__":
    main()
