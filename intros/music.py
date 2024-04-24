class Guitar:
    """simple guitar class"""
    def __init__(self):
        self.n_strings = 6
        self.print_mel()
    def print_mel(self):
        print(f"no. of strings = {self.n_strings}")
        print("hey, hi, hello")
    
my_guitar = Guitar()