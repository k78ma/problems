class Solution:
    def maxArea(self, height: List[int]) -> int:
        
        maxWater = 0
        
        l, r = 0, len(height) - 1
        
        while l < r:
            maxWater = max(maxWater, (r - l)*(min(height[l], height[r])))
            
            if height[l] <= height[r]:
                l += 1
            elif height[l] > height[r]:
                r -= 1
            
        return maxWater