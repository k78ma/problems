class Solution:
    
    KEYBOARD = {
        '2': 'abc',
        '3': 'def',
        '4': 'ghi',
        '5': 'jkl',
        '6': 'mno',
        '7': 'pqrs',
        '8': 'tuv',
        '9': 'wxyz',
    }
    
    def letterCombinations(self, digits: str) -> List[str]:
        
        def dfs(start_index, path):
            if start_index == len(digits):
                result.append(''.join(path))
                return
            
            next_num = digits[start_index]
            for letter in self.KEYBOARD[next_num]:
                path.append(letter)
                dfs(start_index + 1, path)
                path.pop()
            
            
        result = []
        if digits:
            dfs(0, [])
        return result