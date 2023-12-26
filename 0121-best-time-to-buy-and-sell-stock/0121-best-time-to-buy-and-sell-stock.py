class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        maxProfit = 0
        
        lowest = prices[0]
        
        for price in prices:
            if price < lowest:
                lowest = price
                
            profit = price - lowest
            maxProfit = max(maxProfit, profit)
            
        return maxProfit