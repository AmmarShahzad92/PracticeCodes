import pandas as pd
df = pd.read_excel("C:\\Users\\Eliminator 105\\Desktop\\nna.xlsx","Sheet2")
a = df.groupby('section')
print(a)
#for section, section_df in a:
    #print(section)
    #print(section_df,"\n\n")
print(a.get_group("ED"),"\n\n")
