import pandas as pd

def find_classes(courses: pd.DataFrame) -> pd.DataFrame:
    counts = courses.groupby('class').size()
    result = counts[counts >= 5].reset_index(name='count')
    
    return result[['class']]
