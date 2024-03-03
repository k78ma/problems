class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        
        def dfs(start_index, path, used, result):
            
            # Base case
            if start_index == len(nums):
                result.append(path[:])
                return
            
            # Recursion
            for i, number in enumerate(nums):
                if used[i] == True:
                    continue
                
                path.append(number)
                used[i] = True
                
                dfs(start_index + 1, path, used, result)
                
                used[i] = False
                path.pop()
                
        ans = []
        dfs(0, [], [False] * len(nums), ans)
        
        return ans