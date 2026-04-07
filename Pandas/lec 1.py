import pandas as pd
sd7 = { 
      'sun': ['sunny','rainy', 'cloudy'], 
      'date': ['11/8/2019','8/9/2019', '12/9/2019'],
      'time': [1,2,45]}
df =pd.DataFrame(sd7)
print(df,"\n")

columns, rows = df.shape
print(columns, rows)

print(df.head(),"\n")            #only first five 
print(df.tail(),"\n\n")          #only first five

print(df.head(2),"\n")           #only telling how many
print(df.tail(1),"\n\n")         #only telling how many

print(df[1:3],"\n")              #index and slicing in data frame 
print(df[:],"\n\n")              #full print 

print(df.columns,"\n")
#print(df.rows ,"\n\n")

print(df['sun'],"\n\n")          #any specific data from the file
print(df[['sun','time']],"\n\n") #any specific from bulk data

print(df['time'].max(),"\n")     #maximum from the data
print(df['time'].min(),"\n")     #minimun from the data
print(df['time'].mean(),"\n")    #average from the data
print(df.describe(),"\n\n")

print(df[df.time>=12],"\n")                       #condition of value
print(df[df.time==df.time.max()],"\n")            #compairng data frame
print(df['date'][df.time==df.time.max()],"\n\n")  #compairing and declearing any specific df

print(df.index,"\n")                     #check the index    
print(df.set_index('sun'),"\n")          #rearrange and set any data and use it as index number
df.set_index('sun', inplace=True)        #set the index
print(df,"\n")                           
print(df.loc['sunny'],"\n")              #df on specfic index
df.reset_index(inplace=True)             #reset index
print(df,"\n\n")  

