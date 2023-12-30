#try2

fruits = ["mango ", "oranges ", "pineaples "]
x, y, z = fruits
print(x + y + z)
#print(y)
#print(z)

z = "new"

def roy():

    global z
    z = "fantastic"
    print("roy is " + z)

roy()

print (z)
