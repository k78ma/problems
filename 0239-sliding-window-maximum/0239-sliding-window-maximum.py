class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        
        result = []
        l = r = 0
        
        q = collections.deque() # deque of indexes
        
        while r < len(nums):
            while q and nums[q[-1]] < nums[r]: # pop smaller values from q
                q.pop()
            q.append(r)
            
            if l > q[0]:
                q.popleft() # remove left val from window
                
                
            if (r + 1) >= k:
                result.append(nums[q[0]])
                l += 1
                
            r += 1
            
            
        return result