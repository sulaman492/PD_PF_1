def total_balls(balls):
    total=int(balls//6)
    ball = balls%6
    result=str(total)+"."+str(ball)
    result=float(result)
    return result
balls = int(input("Enter the total ballls: "))
result = total_balls(balls)
print("Total overs are: ", result )