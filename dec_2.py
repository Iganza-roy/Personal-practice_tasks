import time

def n_time(func):
    def wrapper_func():
        t1 = time.time()
        func()
        t2 = time.time()-t1
        print('{} ran in {} seconds'.format(func.__name__, t2))
    return wrapper_func

@n_time
def do_one():
    time.sleep(1.3)
@n_time
def do_two():
    time.sleep(.4)

do_one()
do_two()
print('done')