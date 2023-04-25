import random
num = random.randint(1,10)
sum = 0
while True:
  x = int(input("Enter The Number"))
  if x>num:
    print("less")
    sum+=1
  elif x<num:
    print("higher")
    sum+=1
  elif num == x:
    print("You won")
    break
print(f"you scores {sum}")