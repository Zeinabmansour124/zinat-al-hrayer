import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score
import joblib
from sklearn.metrics import confusion_matrix
df = pd.read_csv("donnes_capteurs.csv")
label_map = {
    "clean_air": "safe",
    "spray_1m": "wear-protection",
    "spray_0.5m": "danger",
}
df["label"] = df["label"].map(label_map)
X = df[["MQ135_raw", "MQ3_raw"]]
y = df["label"]
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42, stratify=y)
model = RandomForestClassifier(n_estimators=100, random_state=42)
model.fit(X_train, y_train)
y_pred = model.predict(X_test)
accuracy = accuracy_score(y_test, y_pred)
print(f"Précision : {accuracy * 100:.2f}%")
print(confusion_matrix(y_test, y_pred))