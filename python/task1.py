def area_of_country(name,area):
    total_population=int(148940000)
    percentage=float((area/total_population)*100)
    return percentage

name = input("Enter the country:  ")
area = int(input("Enter the area of the country: "))
result=   area_of_country(name,area)
print(name," is ",result , "% of the total world's landmass") 