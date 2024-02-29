class Solution:
    
    def partition(self, s: str) -> List[List[str]]:
        
        result = []
        part = []
        
    
        def dfs(i):
            if i >= len(s):
                result.append(part.copy())
                return
            for j in range(i, len(s)):
                if self.isPalindrome(s[i:j+1]):
                    part.append(s[i:j+1])
                    dfs(j+1)
                    part.pop()
                    
        dfs(0)
        return result
    
    def isPalindrome(self, s):
        return s == s[::-1]