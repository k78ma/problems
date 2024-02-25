class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        
        alen = len(arr)
        l, r = 0, alen - 1
        res = -1
        
        while l <= r:
            
            m = (l+r) // 2
            
            if m == alen-1 or arr[m] > arr[m+1]:
                r = m - 1
                res = m
            else:
                l = m + 1
        
        return res