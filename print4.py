#pythonquiz1

a = {'name' : 'abc'}
b = a 
c = a.copy()
a['name'] = 'xyz'
print(b['name'], c['name'])


#quiz2 - slicing

my_tup = (5, 12, 19, 3, 25)
tup = my_tup[-2::-2]
print(tup)

#quiz3 - slicing

num = [12, 5, 8, 13, 4]
n = num[::2]
print(num)
