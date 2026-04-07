import pandas as pd
d1 = pd.DataFrame({'temp':[15,22,56],
                   'city':["NY","df","nj"]})
print(d1,"\n\n")

d2 = pd.DataFrame({'height':[15,22,56],
                   'city':["NY","pf","Cf"]})

print(d2,"\n\n")


d3 = pd.DataFrame({'hum':[15,22,56],
                   'city':["nj","Cj","NY"]})
print(d3,"\n\n")

d = pd.merge(d2,d1,on="city")                #only fo common enteries
print(d,"\n\n")
#this merge is only avaiable for two at a time however can use multiple merge

d = pd.merge(d2,d1,on="city", how="inner")                   #For common enteries
print(d,"\n\n")

d = pd.merge(d2,d1,on="city", how="outer")                   #For all enteries
print(d,"\n\n")

d = pd.merge(d2,d1,on="city", how="left",indicator= True)    #For left and common enteries
print(d,"\n\n")

d = pd.merge(d2,d1,on="city", how="right",indicator= True)   #For right and common enteries
print(d,"\n\n")