import pandas as pd

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
    new_col = {'id': 'student_id', 'first': 'first_name', 'last': 'last_name', 'age': 'age_in_years'}
    students.rename(columns=new_col, inplace=True)
    return students