import matplotlib.pyplot as plt
import pandas as pd
from sklearn.mixture import GaussianMixture

def main():
    folder = "/home/matt/바탕화면/kuIotBigdataclass/python/PythonData/data/"
    sp500_px = pd.read_csv(folder + "sp500_data.csv", index_col=0)
    df = sp500_px.loc[sp500_px.index >= '2011-01-01', ['XOM', 'CVX']]

    # mcluster = GaussianMixture(n_components=2).fit(df)
    # print(mcluster.fit_predict(df))

    # print(f"Means: {mcluster.means_}")
    # print(f"Covariances: {mcluster.covariances_}")


    # #graph
    # fig, ax = plt.subplots()
    # colors = [f'C{c}' for c in mcluster.predict(df)]
    # df.plot.scatter(x='XOM', y='CVX', c=colors, alpha=0.5, ax=ax)
    # ax.set_xlim(-3,3)
    # ax.set_ylim(-3,3)    
    # plt.show()

    results = []
    covariance_types = ['full', 'tied', 'diag', 'spherical']
    for n_components in range(1, 9):
        for convariance_type in covariance_types:
            mclust = GaussianMixture(n_components=n_components, 
                                     covariance_type=convariance_type).fit(df)
            results.append({
                'bic': mclust.bic(df),
                'n_components': n_components,
                'convariance_type': convariance_type,
            })

    results = pd.DataFrame(results)

    colors = ['red', 'green', 'blue', 'yellow']
    styles = ['-', '--', '-.', ':']

    #graph
    fig, ax = plt.subplots()
    for i, convariance_type in enumerate(covariance_types):
        subset = results.loc[results['convariance_type'] == convariance_type]
        subset.plot(x='n_components', y='bic', ax=ax, label=convariance_type, kind='line', 
                    color=colors[i], style=styles[i])
        
    ax.legend()
    plt.tight_layout()
    plt.show()



if __name__ == "__main__":
    main()