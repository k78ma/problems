class Solution:
    def maxArea(self, height: List[int]) -> int:
        
        maxWater = 0
        
        l, r = 0, len(height) - 1
        
        while l < r:
            water_width = r - l
            water_height = min(height[l], height[r])
            
            water_total = water_width * water_height
            
            maxWater = max(maxWater, water_total)
            
            if height[l] < height[r]:
                l += 1
            elif height[l] > height[r]:
                r -= 1
            else:
                l += 1
            
        return maxWater