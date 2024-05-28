import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from statsmodels import robust

def main():
    folder = "/home/matt/바탕화면/kuIotBigdataclass/python/PythonData/data"
    state = pd.read_csv(folder + "state.csv")

    binnepopulation = pd.cut(state["Population"], 10)
    binnepopulation.value_counts()
    print(binnepopulation)
    print(binnepopulation.value_counts())

    #plt.hist(state["Population"], bins=10)
    #plt.show()
    #state["Population"].polt.hist(bins=10)
    ax1 = state["Population"].plot.hist(figsize=(1,4), bins=10)
    ax2 = state["Population"].plot.hist(figsize=(2,4), bins=10)
    ax3 = state["Population"].plot.hist(figsize=(3,4), bins=10)
    ax4 = state["Population"].plot.hist(figsize=(4,4), bins=10)
    plt.show()

    ax = state["Murder.Rate"].plot.hist(density=True, xlim=[0, 12], bins=range(1,12)) #type: ignore
    state["Murder.Rate"].plot.density(ax = ax)
    ax.set_xlabel('Murder Rate (per 100,000)')
    plt.show()

if __name__ == "__main__":
    main()