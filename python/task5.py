def likes_dislikes(button):
    if button == "like":
        result=button
    if button == "dislike":
        result=button
    return result
result="nothing"
while(True):
    button = input("Enter your input(like,dislike): ")
    if result != button:
        result=likes_dislikes(button)
    else:
        result="nothing"
    print(result)

