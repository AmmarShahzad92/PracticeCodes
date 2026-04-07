# -*- coding: utf-8 -*-
"""
Created on Sat Aug 24 11:03:21 2024

@author: Mr.Killer 609
"""

import pandas as pd
df = pd.read_excel("D:\pandas\lec 12.xlsx","tem",header=[0,1])
#df1 = df.stack(level=0)
df_stacked = df.stack(level = 0)
print(df_stacked,"\n\n")

df1 = df_stacked.unstack()
print(df1)