import pandas as pd
import numpy as np
df = pd.read_excel("D:\\pandas\\Lec 13.xlsx","Sheet1")
# crosstab is use to menuplate specific data and make table while programming
df1 = pd.crosstab(df.Nationality,df.Age,margins=True)#margin to sum up the total 
print(df1,"\n\n")
# while we can pass an list in the second argument the is columns sames for first arguement of index 
df2 = pd.crosstab([df.Genders,df.Nationality], df.Handedness,margins=True)
print(df2,"\n\n")

df3 = pd.crosstab(df.Genders, [df.Nationality,df.Age],margins=True)
print(df3,"\n\n")

df4 =  pd.crosstab(df.Genders, df.Nationality,values=df.Age, aggfunc=np.average)
print(df4)
