class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        
        result = []
        nums.sort()
        
        for i, firstNum in enumerate(nums):
            
            if firstNum > 0: # Skip positive numbers
                break
                
            if i > 0 and firstNum == nums[i - 1]: # Check for duplicates
                continue
            
            l, r = i + 1, len(nums) - 1
            
            while l < r:
                threesum = firstNum + nums[l] + nums[r]
                
                if threesum > 0:
                    r -=1
                    
                elif threesum < 0:
                    l += 1
                    
                else:
                    result.append([firstNum, nums[l], nums[r]])
                    r -= 1
                    while nums[r] == nums[r + 1] and l < r:
                        r -= 1
                    
        return result
    
