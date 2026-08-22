class Solution:
    def checkDivisibility(self, n: int) -> bool:
        def digit_sum(n):
            sum=0
            while n>0:
                sum+=n%10
                n//=10
            return sum

        def digit_product(n):
            product=1
            while n>0:
                product*=n%10
                n//=10
            return product

        return(True if n % (digit_sum(n) + digit_product(n)) == 0 else False)
