from matplotlib import pyplot as plot

print("Data of the population of top 5 countries of the world")
print("\nData taken from U.S. Census Bureau Current Population")
print("\nCreated for MLH daily task by a noob")


a, b, c = [1,2,3,4], [2,4,6,8], [1,4,9,16]

plot.xlabel('Countries')
plot.ylabel('Population')
countries = ['China', 'India', 'USA', 'Indonesia', 'Pakistan']
popu = [1394015977, 1325349639, 329877505, 272856400, 233431156]
plot.bar(countries,popu,width = 0.7, color = ['green', 'red', 'blue', 'yellow', 'violet', 'orange'])
plot.title("POPULOUS COUNTRIES (July 1, 2020)")
plot.show()