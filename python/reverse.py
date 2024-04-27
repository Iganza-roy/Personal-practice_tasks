#Given a signed 32-bit integer x, return x with its digits reversed. 
# If reversing x causes the value to go outside the signed 32-bit integer 
# range [-231, 231 - 1], then return 0.
import math

class Soultion:
    """The solution
    """
    def reverse(self, x: int) -> int:
        """defining the reverse function
           Args: 
                x(int): the value to be reversed
        """
        sign = -1 if x < 0 else 1
        x = abs(x)

        #convert to string
        str_x = str(x)

        rev_str = str_x[::-1] #actual reversing

        rev_x = int(rev_str)

        if rev_x > 2**32 - 1: #checking if value is outside the signed 32-bit...
            return 0

        return rev_x * sign

#example
new_1 = Soultion()
print(new_1.reverse(-231))
