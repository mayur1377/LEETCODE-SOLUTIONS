class Solution(object):
    def canPlaceFlowers(self, a, n):            
        if n == 0: return True
        a = [0] + a + [0]
        for i in range(1, len(a)-1):            
            if a[i-1] == a[i] == a[i+1] == 0:
                a[i] = 1
                n -= 1
                if n == 0: return True     
        return False
        