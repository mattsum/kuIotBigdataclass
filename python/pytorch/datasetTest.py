import pandas as pd
import torch
from torch.utils.data import Dataset, DataLoader

class MyDataset(Dataset):
    def __init__(self, csv_file):
        self.label = pd.read_csv(csv_file)
    def __len__(self):
        return len(self.label)
    def __getitem__(self, idx):
        sample = torch.tensor(self.label.iloc[idx, 0:3]).int()
        label = torch.tensor(self.label.iloc[idx, 3]).int()
        return sample, label

def main():
    folder = "/home/matt/바탕화면/kuIotBigdataclass/python/pytorch/data/"
    tensor_dataset = MyDataset(folder + "covtype.csv")
    dataset = DataLoader(tensor_dataset, batch_size=4, shuffle=True)


if __name__ == "__main__":
    main()