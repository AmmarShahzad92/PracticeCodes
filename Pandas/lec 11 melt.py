import pandas as pd
df = pd.read_csv("D:\\pandas\\lec 11.csv")
df1 = pd.melt(df, id_vars=["day"],var_name="city", value_name="temp")
#df2 = [df1["city"] == "Washington DC"]    #when dealing with specific data
print(df1)