def make_rug(width,height,letter):
    result=""
    for i in range (0,height,1):
        for j in range(0,width,1):
            result=result+letter
        result=result+"\n"
    return result
           
width = int(input("Enter a width: "))
height = int(input("Enter a height: "))
letter = input("Enter a character: ") 
if letter == "":
    letter ="#"
result1 = (make_rug(width,height,letter));
print(result1)
