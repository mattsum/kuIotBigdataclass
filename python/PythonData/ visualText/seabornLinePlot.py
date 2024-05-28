import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns

def main():
    fmri = sns.load_dataset("fmri")
    sns.set_style("whitegrid")
    sns.lineplot(x=time)