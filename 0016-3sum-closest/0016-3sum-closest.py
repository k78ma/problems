class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        
        nums.sort()
        closest_sum = nums[0] + nums[1] + nums[2]
        
        for idx_1 in range(len(nums) - 2):
            
            l, r  = idx_1 + 1, len(nums) - 1
            
            while l < r:
                current_sum = nums[idx_1] + nums[l] + nums[r]
                diff = current_sum - target
                
                if abs(diff) < abs(closest_sum - target):
                    closest_sum = current_sum
                
                if current_sum < target:
                    l += 1
                elif current_sum > target:
                    r -= 1
                else:
                    return closest_sum
            
        return closest_sum
            
            
            