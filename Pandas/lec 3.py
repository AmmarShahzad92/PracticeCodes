import pandas as pd 
#df = pd.read_csv("C:\\Users\\Eliminator 105\\Desktop\\Book1.csv")     read csv file
 
#df = pd.read_csv("C:\\Users\\Eliminator 105\\Desktop\\Book1.csv", skiprows=1)   Skip 1st row
#df = pd.read_csv("C:\\Users\\Eliminator 105\\Desktop\\Book1.csv", header=1)     Skip 1st row

#df = pd.read_csv("C:\\Users\\Eliminator 105\\Desktop\\Book1.csv", header=None,
#                 names=["num","alpha","ratio","GRA"])                            File had no name


#df = pd.read_csv("C:\\Users\\Eliminator 105\\Desktop\\Book1.csv",
#                 na_values = ["not available","1244"])                          No value is available

#can make it for all as by make and subbplying a list

#print(df,"\n\n")



def convert(cell):
    if cell==854:
        return 87541
    return cell
df = pd.read_excel("C:\\Users\\Eliminator 105\\Desktop\\nna.xlsx","Sheet2", converters={'nymber':convert})
print(df)

