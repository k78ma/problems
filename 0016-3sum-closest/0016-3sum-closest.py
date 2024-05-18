class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        
        nums.sort()
        n = len(nums)
        closest_sum = nums[0] + nums[1] + nums[2] 

        for i in range(n - 2):
            left, right = i + 1, n - 1  # 2ptrs
            while left < right:
                current_sum = nums[i] + nums[left] + nums[right]
                
                # if the current sum is closer to the target, update closest_sum
                if abs(current_sum - target) < abs(closest_sum - target):
                    closest_sum = current_sum

                if current_sum < target:
                    left += 1 
                elif current_sum > target:
                    right -= 1
                else:
                    return closest_sum  # Exact match

        return closest_sum