import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import seaborn as sns
from statsmodels import robust

def plot_corr_ellipse(data, figsize=None, **kwargs):
    M = np.array(data)
    if not M.ndim == 2:
        raise ValueError('Data must be a 2D array')
    fig, ax = plt.subplots(1,1, figsize=figsize, subplot_kw={'aspect': 'equal'})
    ax.set_xlim(-0.5, M.shape[1] - 0.5)
    ax.set_ylim(M.shape[0] -0.5,- 0.5)
    ax.invert_yaxis()

    xy = np.indices(M.shape)[::-1].reshape(2, -1).T

    w = np.ones_like(M).ravel() +0.01
    h = 1 - np.abs(M).ravel() -0.01
    a = 45 * np.sign(M).ravel()

    ex = EllipsisCollection(width=w, height=h, angles=a)
def main():
    folder = "/home/matt/바탕화면/kuIotBigdataclass/python/PythonData/data/"
    state = pd.read_csv(folder + "state.csv")
    
    binnedPopulation = pd.cut(state["Population"], 10)
    binnedPopulation.value_counts()
    print(binnedPopulation)
    print(binnedPopulation.value_counts())
    
    # plt.hist(state["Population"], bins=10)
    # plt.show()
    # state["Population"].plot.hist(bins=10)
    # ax1 = state["Population"].plot.hist(bins=10)
    # plt.show()
    
    ax = state["Murder.Rate"].plot.hist(density=True, xlim=[0, 12], bins=range(1,12)) #type: ignore
    state["Murder.Rate"].plot.density(ax = ax)
    ax.set_xlabel('Murder Rate (per 100,000)')
    plt.show()
    
    
    


if __name__ == "__main__":
    main()