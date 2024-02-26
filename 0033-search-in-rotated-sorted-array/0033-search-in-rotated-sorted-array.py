class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1

        while l <= r:
            mid = (l + r) // 2
            if target == nums[mid]:
                return mid

            # What portion are we in?
            # Left portion
            if nums[l] <= nums[mid]:
                if target > nums[mid] or target < nums[l]:
                    l = mid + 1 # Search right portion
                else:
                    r = mid - 1 # Search left portion
                    
            # Right portion
            else:
                if target < nums[mid] or target > nums[r]:
                    r = mid - 1 # Search left portion
                else:
                    l = mid + 1 # Search right portion
        return -1