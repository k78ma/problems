class Solution:
    def partition(self, s: str) -> List[List[str]]:
        
        n = len(s)
    
        def is_palindrome(word):
            return word == word[::-1]

        def dfs(start, path):
            if start == n:
                result.append(path[:])
                return

            for end in range(start + 1, n + 1):
                prefix = s[start : end]
                if is_palindrome(prefix):
                    dfs(end, path + [prefix])


        result = []
        dfs(0, [])
        return result