import matplotlib.pyplot as plt
import numpy as np
from matplotlib.lines import lineStyles
from matplotlib.patches import Shadow


def main():
    X1 = np.random.rand(512, 2)
    Y1 = np.random.rand(512, 2)
    A1 = np.random.rand(512, 2) * 150
    colors = np.random.rand(512, 2)
    for i in range(2):
        plt.scatter(X1[:,i], Y1[:,i], s=A1[:,i], c=colors[:,i], alpha=0.5,)
   
    plt.show()

if __name__ == "__main__":
    main()