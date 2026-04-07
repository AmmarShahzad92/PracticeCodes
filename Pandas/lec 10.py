import pandas as pd
df = pd.read_csv("C:\\Users\\Mr.Killer 609\\Desktop\\lec 10.csv") #for CSV only
print(df,"\n\n")
df = df.pivot(index="date", columns="City")                       #for data of two types only 
df = df.pivot_table(index="date", columns="City",aggfunc=("sum")) #aggfunc only works for Pivot_table
print(df,"\n\n")