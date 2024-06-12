import pandas as pd
from sklearn.feature_extraction.text import CountVectorizer
from sklearn.naive_bayes import BernoulliNB
from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score

def main():
    y_example_text = ["Sports", "Not Sports", "Sports", "Sports", "Not Sports"]
    y_example = [1 if c == "Sports" else 0 for c in y_example_text]
    text_example = ["A Great Game Game", "the the election was over", "very clean match", "A Clean but forgettable game game", "It was a close election"]
    contervect_example = CountVectorizer()
    X_example = contervect_example.fit_transform(text_example)
    print(contervect_example.get_feature_names_out())
    print(contervect_example.transform(text_example).toarray())
    print(contervect_example.vocabulary_)
    model = BernoulliNB(alpha=1, binarize=0.0)

    model.fit(X_example, y_example)
    print(model.class_log_prior_)

    y_pred = model.predict(X_example)

    #평가
    print(f"y_pred: {y_pred}")
    print(f"y_example: {y_example}")
    print(f"accuracy_score: {accuracy_score(y_example, y_pred)}")
    print(f"precision_score: {precision_score(y_example, y_pred)}")
    print(f"recall_score: {recall_score(y_example, y_pred)}")
    print(f"f1_score: {f1_score(y_example, y_pred)}")

if __name__ == "__main__":
    main()