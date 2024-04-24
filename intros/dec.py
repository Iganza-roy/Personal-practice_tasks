def decotator_func(original_func):
    def wrapper_func():
        return original_func()
    return wrapper_func

def display():
    print('display function ran')

decotator_display = decotator_func(display)

decotator_display()
