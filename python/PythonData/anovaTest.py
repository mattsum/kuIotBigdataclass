import pandas as pd
import matplotlib.pyplot as plt


def main():
    folder = "/home/matt/바탕화면/kuIotBigdataclass/python/PythonData/data/"
    four_seesion = pd.read_csv(folder + "four_sessions.csv")
    print(four_seesion.head())
    print(four_seesion.info())

    fig = plt.figure()
    ax = fig.add_subplot()
    four_seesion.boxplot(by="Page", column="Time", ax=ax)
    plt.show()

if __name__ == "__main__":
    main()