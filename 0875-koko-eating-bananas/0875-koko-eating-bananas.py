class Solution(object):
    def minEatingSpeed(self, piles, h):
        """
        :type piles: List[int]
        :type h: int
        :rtype: int
        """
        
        low, high = 1, max(piles)
        result = high
        
        while low <= high:
            k = (low + high) // 2
            
            time = 0
            for p in piles:
                time += math.ceil(float(p) / k)
            if time <= h:
                result = k
                high = k - 1
            else:
                low = k + 1
        return result