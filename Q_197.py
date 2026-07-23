import pandas as pd

def rising_temperature(weather: pd.DataFrame) -> pd.DataFrame:
    merged = weather.merge(
        weather,
        left_on="recordDate",
        right_on=weather["recordDate"] + pd.Timedelta(days=1),
        suffixes=("", "_prev")
    )
    result = merged[merged["temperature"] > merged["temperature_prev"]]
    return result[["id"]]
