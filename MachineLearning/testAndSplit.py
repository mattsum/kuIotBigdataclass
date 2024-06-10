import numpy as np
from sklearn.model_selection import train_test_split

def main():
    X = np.arange(10).reshape((5, 2))
    y = range(5)
    print(f"X : {X}")
    print(f"y : {y}")
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.33, random_state=42)
    print(f"X_train : {X_train}")
    print(f"X_test : {X_test}")
    print(f"y_train : {y_train}")
    print(f"y_test : {y_test}")

if __name__ == "__main__":
    main()

    