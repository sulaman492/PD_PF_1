def number_length(number):
    count = 0
    if number == 0:
        count=1
        return count
    else:
        while(number!=0):
         count = count+1
         number=number//10
    return count    

number = int(input("Enter a number: "))  

length = number_length(number)
print("The length of number is: ",length)