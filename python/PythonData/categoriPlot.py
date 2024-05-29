import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import numpy as np


def main():
    folder = "/home/matt/바탕화면/kuIotBigdataclass/python/PythonData/data/"
    lc_loans = pd.read_csv(folder + "lc_loans.csv")
    print(lc_loans.info())

    crosstab = lc_loans.pivot_table(index='grade', columns='status', aggfunc=lambda x: len(x), margins=True)
    print(crosstab)
    
    df = crosstab.loc['A':'G', :].copy()
    df.loc[:, 'Charged Off':'Late'] = df.loc[:, 'Charged Off':'Late'].div(df['All'], axis=0)
    df['All'] = df['All'] / sum(df['All'])
    perc_crosstab = df
    print(perc_crosstab)
    
    # air_line boxplot 번주형 vs 수치형
    airline_stats = pd.read_csv(folder + "airline_stats.csv")
    # ax = airline_stats.boxplot(by='airline', column='pct_carrier_delay')
    # ax.set_xlabel('')
    # ax.set_ylabel('Daily % of Delayed Flights')
    # plt.suptitle('')
    # plt.show()
    print(airline_stats.info())

    # airline_stats = pd.read_csv(folder + "airline_stats.csv")
    # ax = sns.violinplot(data = airline_stats, x='airline', y= 'pct_carrier_delay', inner='quartile', color='white')
    # ax.set_xlabel('')
    # ax.set_ylabel('Daily % of Delayed Flights')
    # plt.show()
    
    ax = sns.violinplot(data = airline_stats, x='airline', y= 'pct_carrier_delay', inner='quartile', color='white')
    ax.set_xlabel('')
    ax.set_ylabel('Daily % of Delayed Flights')
    plt.show()

    #zipcode tex
    zip_codes = [98188, 98105, 98108, 98126]
    kc_tax = pd.read_csv(folder + "kc_tax.csv")
    kc_tax_zip = kc_tax[kc_tax['zipcode'].isin(zip_codes),:]
    print(kc_tax_zip.info())

    g = sns.FacetGrid(kc_tax_zip, col='zipcode', col_wrap=2)
    g.map(hexbin, 'SqFtTotLiving', 'TaxAssessedValue', extent=[0, 3500, 0, 7000000])
    g.set_axis_labels('Finished Square Feet', 'Tax Assessed Value')
    g.set_titles('Zipcode {col_name:.0f}')
    plt.show()

if __name__ == "__main__":
    main()