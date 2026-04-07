import pandas as pd
df = pd.read_excel('C:\\Users\\Eliminator 105\\Desktop\\nna.xlsx','Sheet2')
#print(df,"\n\n")
#print(a)
#for id, id_df in a:
#     print(pays)
#     print(pays_df,"\n\n")
#print(a.get_group('Rescue'))
%matplotlib inline
print(df.plot("pays"))