import pandas as pd

a = pd.DataFrame(
    { 
     'hell':[1,58,795,00],
     'fire': ["ee","df","sdf","ssd"]
     })

b = pd.DataFrame(
    { 
     'hell':[88,78,57,120],
     'fire': ["ewe","def","sf","fd"]
     })
#c = pd.concat([a,b],ignore_index= True)
c = pd.concat([a,b], keys=["Hell","Base"])
e = c.loc['Base']
print(e)