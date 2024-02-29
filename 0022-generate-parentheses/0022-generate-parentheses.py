class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        
        def dfs (i, path, num_open, num_closed, result):
            
            if i == 2*n:
                result.append(''.join(path))
                return
            
            if num_open < n:
                path.append('(')
                dfs(i+1, path, num_open + 1, num_closed, result)
                path.pop()
                
            if num_closed < num_open:
                path.append(')')
                dfs(i+1, path, num_open, num_closed + 1, result)
                path.pop()
                
        ans = []
        dfs(0, [], 0, 0, ans)
        
        return ans