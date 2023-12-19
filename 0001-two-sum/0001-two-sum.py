class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        num_map = {}  # val -> index

        for i, n in enumerate(nums):
            num_map[n] = i

        for i, n in enumerate(nums):
            diff = target - n
            
            if diff in num_map and num_map[diff] != i:
                return [num_map[diff], i]
