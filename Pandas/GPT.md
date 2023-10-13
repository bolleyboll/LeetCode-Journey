```
## Create a DataFrame from List

To create a DataFrame from a list in Python, you can use the pandas library. First, you'll need to import pandas, and then you can use the `pd.DataFrame()` constructor to create a DataFrame from a list. Here's an example of how to do it:

```python
import pandas as pd

# Sample list of data
data = [['Alice', 28], ['Bob', 32], ['Charlie', 45], ['David', 22]]

# Define column names
columns = ['Name', 'Age']

# Create a DataFrame
df = pd.DataFrame(data, columns=columns)

# Display the DataFrame
print(df)
```

In this example, we create a DataFrame with two columns: "Name" and "Age" from the list of data. You can replace the sample data and column names with your own data as needed.

## Get the Size of a DataFrame

To get the size (i.e., the number of rows and columns) of a DataFrame in pandas, you can use the `.shape` attribute. Here's how you can do it:

```python
import pandas as pd

# Create a sample DataFrame
data = {'Name': ['Alice', 'Bob', 'Charlie', 'David'],
        'Age': [28, 32, 45, 22]}

df = pd.DataFrame(data)

# Get the size of the DataFrame
rows, columns = df.shape

print(f"Number of rows: {rows}")
print(f"Number of columns: {columns}")
```

In this code, `df.shape` returns a tuple where the first element is the number of rows, and the second element is the number of columns in the DataFrame. You can access these values using tuple unpacking, as shown in the example.

## Student Ulysses has student_id = 101, we select the name and age.

To select the name and age of a student with student_id 101 from a DataFrame, you can use pandas' DataFrame methods like `loc` or `query`. Here's how you can do it using the `loc` method:

Assuming you have a DataFrame named `df` with columns 'student_id', 'Name', and 'Age':

```python
import pandas as pd

# Sample DataFrame
data = {'student_id': [101, 102, 103, 104],
        'Name': ['Ulysses', 'Alice', 'Bob', 'Charlie'],
        'Age': [20, 28, 32, 45]}

df = pd.DataFrame(data)

# Select name and age for student_id 101
student_id = 101
result = df.loc[df['student_id'] == student_id, ['Name', 'Age']]

print(result)
```

This code will return a DataFrame containing the 'Name' and 'Age' of the student with student_id 101.

Alternatively, you can use the `query` method:

```python
result = df.query('student_id == 101')[['Name', 'Age']]
print(result)
```

Both approaches will give you the same result.

## what is [[]]

`[[]]` is a nested list in Python. It is a list that contains another list as its single element. Nested lists are used to create data structures that can hold multiple levels of data, making it a useful way to represent structured data or create multi-dimensional arrays.

For example, a simple use case of `[[ ]]` is to create a two-dimensional list or matrix. Here's an example of a 2x2 matrix as a nested list:

```python
matrix = [[1, 2], [3, 4]]
```

In this case, `matrix` is a list of lists, where each inner list represents a row of the 2x2 matrix.

You can access elements within a nested list using multiple indices. For example, to access the element at the first row and second column of the matrix:

```python
element = matrix[0][1]  # This will give you the value 2
```

Nested lists are quite versatile and can be used for various data structures, including matrices, lists of lists, trees, and more.

## I meant [['Name', 'Age']]

`[['Name', 'Age']]` is a nested list containing another list as its single element. In this specific case, it appears to be a list that could be used as a header or column labels for a table or DataFrame.

For instance, if you're working with tabular data in a Python library like pandas, you might use a nested list like this as the column names when creating a DataFrame:

```python
import pandas as pd

# Nested list as column names
columns = [['Name', 'Age']]

# Create a DataFrame with these column names
df = pd.DataFrame(columns=columns)

# Now the DataFrame has columns 'Name' and 'Age'
```

In this example, the inner list `['Name', 'Age']` serves as the header row for the DataFrame, specifying the column names.

## Create a New Column

To create a new column in a pandas DataFrame, you can use the bracket notation to assign values to a new column name. Here's how you can do it:

```python
import pandas as pd

# Sample DataFrame
data = {'Name': ['Alice', 'Bob', 'Charlie', 'David'],
        'Age': [28, 32, 45, 22]}

df = pd.DataFrame(data)

# Create a new column called 'City' and assign values to it
df['City'] = ['New York', 'Los Angeles', 'Chicago', 'Houston']

# Display the DataFrame with the new column
print(df)
```

In this example, we first create a DataFrame with columns 'Name' and 'Age'. Then, we create a new column called 'City' and assign a list of city names to it. This will add a new column with the specified name and values to the DataFrame.

You can also create a new column by performing operations on existing columns. For example, if you want to calculate the year of birth based on the age and the current year:

```python
import pandas as pd

# Sample DataFrame
data = {'Name': ['Alice', 'Bob', 'Charlie', 'David'],
        'Age': [28, 32, 45, 22]}

df = pd.DataFrame(data)

# Create a new column 'YearOfBirth' based on 'Age'
current_year = 2023
df['YearOfBirth'] = current_year - df['Age']

# Display the DataFrame with the new column
print(df)
```

This will add a new column 'YearOfBirth' to the DataFrame containing the calculated birth years.

## Drop Duplicate Rows pandas

You can drop duplicate rows in a pandas DataFrame using the `drop_duplicates()` method. Here's how you can do it:

```python
import pandas as pd

# Sample DataFrame with duplicate rows
data = {'Name': ['Alice', 'Bob', 'Alice', 'David', 'Bob'],
        'Age': [28, 32, 28, 22, 32]}

df = pd.DataFrame(data)

# Drop duplicate rows based on all columns
df_no_duplicates = df.drop_duplicates()

# Display the DataFrame without duplicates
print(df_no_duplicates)
```

In this example, `df.drop_duplicates()`

 removes rows where all columns have the same values. If you want to drop duplicates based on specific columns, you can pass a subset of columns to the `subset` parameter like this:

```python
df_no_duplicates = df.drop_duplicates(subset=['Name'])

# This will drop rows where the 'Name' column has the same value.
```

By default, the `keep` parameter is set to 'first', which keeps the first occurrence of a duplicated row and removes subsequent occurrences. If you want to keep the last occurrence or drop all duplicates, you can change the `keep` parameter:

```python
df_no_duplicates = df.drop_duplicates(keep='last')  # Keep the last occurrence
df_no_duplicates = df.drop_duplicates(keep=False)   # Drop all duplicates
```

After applying `drop_duplicates()`, `df_no_duplicates` will contain the DataFrame without duplicate rows.

## Drop Missing Data based on name column

To drop rows with missing data (NaN or None) based on a specific column, you can use the `dropna()` method in pandas. Here's how to do it based on the "Name" column:

Assuming you have a DataFrame with a "Name" column and you want to drop rows with missing data in the "Name" column:

```python
import pandas as pd
import numpy as np  # Import numpy for creating NaN values

# Sample DataFrame with some missing data
data = {'Name': ['Alice', 'Bob', 'Charlie', 'David'],
        'Age': [28, 32, 45, 22]}

df = pd.DataFrame(data)

# Drop rows with missing data in the 'Name' column
df.dropna(subset=['Name'], inplace=True)

# The original DataFrame 'df' is now updated without rows containing missing data in the 'Name' column
print(df)
```

In this example, the `dropna()` method is used with the `subset` parameter set to 'Name' to specify that rows with missing data should be dropped based on the "Name" column. With `inplace=True`, it modifies the original DataFrame in place, and rows with missing data in the "Name" column are removed.

## Rename Columns

To rename columns in a pandas DataFrame, you can use the `rename()` method. Here's how you can rename columns:

Assuming you have a DataFrame named `df` with existing column names, and you want to rename some or all of the columns:

```python
import pandas as pd

# Sample DataFrame with original column names
data = {'OldName1': [1, 2, 3],
        'OldName2': [4, 5, 6]}

df = pd.DataFrame(data)

# Define a dictionary to map old column names to new column names
new_column_names = {'OldName1': 'NewName1', 'OldName2': 'NewName2'}

# Rename columns
df.rename(columns=new_column_names, inplace=True)

# The columns are now renamed in the original DataFrame 'df'
print(df)
```

In this example, the `rename()` method is used with a dictionary to map the old column names to new column names. With `inplace=True`, it modifies the original DataFrame in place, renaming the specified columns. You can rename as many columns as needed by adding more key-value pairs to the dictionary.

If you want to rename only a single column, you can do it like this:

```python
df.rename(columns={'OldName1': 'NewName1'}, inplace=True)
```

This will rename just the "OldName1" column to "NewName1."

## Change Data Type of a column

To change the data type of a column in a pandas DataFrame, you can use the `.astype()` method. Here's how you can do it:

Assuming you have a DataFrame named `df`, and you want to change the data type of a specific column, for example, from integer to float:

```python
import pandas as pd

# Sample DataFrame with an integer column
data = {'Name': ['Alice', 'Bob', 'Charlie', 'David'],
        'Age': [28, 32, 45, 22]}

df = pd.DataFrame(data)

# Change the data type of the 'Age' column from int to float
df['Age'] = df['Age'].astype(float)

# The 'Age' column in the original DataFrame 'df' now has a float data type
print(df.dtypes)
```

In this example, the `.astype()` method is used to change the data type of the "Age" column from integer to float. You can replace `'float'` with the desired data type, such as `'int'`, `'str'`, or any valid data type for your specific use case.

Remember that changing data types may result in data loss or unexpected behavior if the conversion isn't compatible with the data in the column, so be sure to handle it accordingly.

## Reshape the data so that each row represents sales data for a product in a specific quarter.

To reshape your data so that each row represents sales data for a product in a specific quarter, you can use the `pivot()` method in pandas. Here's an example of how to do it:

Assuming you have a DataFrame named `df` with the specified columns "product," "quarter_1," "quarter_2," "quarter_3," and "quarter_4," and you want to reshape the data:

```python
import pandas as pd

# Sample DataFrame with sales data
data = {
    'product': ['A', 'B', 'C'],
    'quarter_1': [100, 200, 150],
    'quarter_2': [120, 220, 160],
    'quarter_3': [110, 210, 170],
    'quarter_4': [130, 230, 180]
}

df = pd.DataFrame(data)

# Res

hape the data using pivot()
pivoted_df = df.pivot(index='product', columns='quarter', values=['quarter_1', 'quarter_2', 'quarter_3', 'quarter_4'])

# Display the pivoted DataFrame
print(pivoted_df)
```

In this example, the `pivot()` method is used to reshape the data. The "product" column becomes the index, the "quarter" values become separate columns, and the sales data is placed in the corresponding cells. The result is a new DataFrame where each row represents sales data for a specific product in a specific quarter.

## DataFrame report

```
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| name        | object |
| species     | object |
| age         | int    |
| weight      | int    |
+-------------+--------+
```

Write a solution to list the names of animals that weigh strictly more than 100 kilograms.

Return the animals sorted by weight in descending order.

```python
import pandas as pd

# Sample DataFrame with animal data
data = {
    'name': ['Lion', 'Tiger', 'Elephant', 'Giraffe', 'Kangaroo'],
    'species': ['Mammal', 'Mammal', 'Mammal', 'Mammal', 'Mammal'],
    'age': [5, 6, 15, 10, 3],
    'weight': [200, 250, 5000, 800, 75]
}

animals = pd.DataFrame(data)

# Filter animals that weigh more than 100 kilograms and sort them by weight in descending order
heavy_animals = animals[animals['weight'] > 100].sort_values(by='weight', ascending=False)

# Get the names of the heavy animals as a DataFrame
names_of_heavy_animals = heavy_animals[['name']]

# Display the names of animals that weigh more than 100 kilograms, sorted by weight in descending order
print(names_of_heavy_animals)
```

This code will return a Pandas DataFrame containing the names of animals that weigh more than 100 kilograms, sorted by weight in descending order.

```
   name
2  Elephant
3  Giraffe
0  Lion
1  Tiger
```
