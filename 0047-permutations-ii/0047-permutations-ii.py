class Solution(object):
    def permuteUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        
        def backtrack(start=0):
            # If the current permutation is complete
            if start == len(nums):
                result.append(nums[:])
                return

            seen = set()
            for i in range(start, len(nums)):
                # skip duplicates
                if nums[i] in seen:
                    continue
                seen.add(nums[i])
                # swap the current element with start element
                nums[start], nums[i] = nums[i], nums[start]
                # generate permutations from the next position
                backtrack(start + 1)
                # backtrack
                nums[start], nums[i] = nums[i], nums[start]

        result = []
        nums.sort()  
        backtrack()
        return result
