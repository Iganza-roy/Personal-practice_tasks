import math

class Soultion:
    def reverse(self, x: int) -> int:
        x = abs(x)
        num = []

        while x:
            n = x % 10
            num = num.append(n)

        return num

        


new_1 = Soultion()
print(new_1.reverse(-231))