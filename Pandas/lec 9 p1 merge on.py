import pandas as pd
d1 = pd.DataFrame({'temp':[15,22,56],
                   'city':["NY","Cf","nj"]})
print(d1,"\n\n")

d2 = pd.DataFrame({'height':[15,22,56],
                   'city':["NY","nj","Cf"]})
print(d2,"\n\n")


d3 = pd.DataFrame({'hum':[15,22,56],
                   'city':["nj","Cf","NY"]})
print(d3,"\n\n")

d = pd.merge(d2,d1,on="city")                #only fo common enteries
dd = pd.merge(d,d3,on="city")
print(dd,"\n\n")
#this merge is only avaiable for two at a time however can use multiple merge

