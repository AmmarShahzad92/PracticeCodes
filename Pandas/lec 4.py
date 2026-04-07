# mising data problem
import pandas as pde
df = pde.read_excel("C:\\Users\\Eliminator 105\\Desktop\\nna.xlsx", "Sheet2")
#new_df =df.fillna(method="bfill",limit=2)           movw bottom to up

#new_df =df.fillna(method="ffill",limit=2)           #move upto down
#new_df = df.interpolate(method = "time")            #dealing with data having time 

#new_df = df.dropna(how="all")                        #all moty cell
new_df = df.dropna(thresh =3)
print(new_df,"\n\n")
#new_df = df.fillna({'nymber':0,'section':'CE 6'})
#print(new_df,"\n\n")