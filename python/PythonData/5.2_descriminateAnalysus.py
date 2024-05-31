import numpy as np
import pandas as pd
from sklearn.discriminant_analysis import LinearDiscriminantAnalysis
import seaborn as sns
import matplotlib.pyplot as plt

def main():
    folder = "/home/matt/바탕화면/kuIotBigdataclass/python/PythonData/data/"
    loan3000 = pd.read_csv(folder + "loan3000.csv")
    
    # convert to categorical
    loan3000['outcome'] = loan3000['outcome'].astype('category')
    
    predictors = ['borrower_score', 'payment_inc_ratio']
    outcome = 'outcome'
    
    X = loan3000[predictors]
    y = loan3000[outcome]
    loan_lda = LinearDiscriminantAnalysis()
    loan_lda.fit(X, y) # Core training code
    result = pd.DataFrame(loan_lda.scalings_, index=X.columns)
    print(result)
    print(f"Intercept: {loan_lda.intercept_}")
    for name, coef in zip(predictors, loan_lda.coef_[0]):
        print(f"\t{name}: {coef:.3f}")
    pred = pd.DataFrame(loan_lda.predict_proba(loan3000[predictors]), columns=loan_lda.classes_)
    print(pred.head())

    center = np.mean(loan_lda.means_, axis=0)
    slope = - loan_lda.scalings_[0] / loan_lda.scalings_[1]
    intercept = center[1] - center[0] * slope

    # Find borrower_score values where payment_inc_ratio is 0 or 20
    x_0 = (0 - intercept) / slope
    x_20 = (20 - intercept) / slope

    lda_df = pd.concat([loan3000, pred['default']], axis=1)
    lda_df.head()

    fig, ax = plt.subplots(figsize=(6, 6))
    sns.scatterplot(x='borrower_score', y='payment_inc_ratio', hue='default', 
                    data=lda_df, palette=sns.diverging_palette(240, 10, n=9, as_cmap=True), ax=ax)
    ax.set_ylim(0, 20)
    ax.set_xlim(0.15, 0.8)
    plt.plot((x_0, x_20), (0, 20), linewidth=3)
    plt.plot(*loan_lda.means_.transpose())
    plt.legend(title='default', loc='upper right')
    plt.show()

if __name__ == "__main__":
    main()
