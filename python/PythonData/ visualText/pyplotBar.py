import matplotlib.pyplot as plt
import numpy as np
from matplotlib.lines import lineStyles
from matplotlib.patches import Shadow


def main():
    data= [[5., 25., 50., 20.],
           [4., 23., 51., 17.],
           [6., 22., 52., 19.]]
    
    # X = np.arange(0,8,2)

    # plt.bar(X+0.00, data[0], color = 'b', width = 0.50)
    # plt.bar(X+0.50, data[1], color = 'g', width = 0.50)
    # plt.bar(X+1.0, data[2], color = 'r', width = 0.50)
    # plt.bar(X+0.50, ("A","B", "C", "D"))
    data2 = np.array(data)
    #중복허용안함
    color_list = np.random.choice(['b', 'g', 'r', 'y', 'm', 'c', 'k'], data2.shape[0])
    data_label = list("ABCDEFGHIJKLMNOPQRSTUVWXYZ")[:data2.shape[0]]
    X = np.arange(data2.shape[1])

    for i in range(data2.shape(0)):
        plt.bar(X, data2[i], bottom = np.sum(data2[:i], axis=0), color = color_list[i], label = data_label[i])
    
    plt.legend()
    plt.show()

if __name__ == "__main__":
    main()