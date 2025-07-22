from collections import defaultdict
from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        result = defaultdict(int)
        # Key: character count array [a, ..., z]
        # Value: corresponding strings

        for string in strs:
            char_count = [0] * 26

            for char in string:
                char_count[ord(char) - ord("a")] += 1

            result[tuple(char_count)].append(string) # Use tuple bc dict keys must be immutable
            print(result)

        return list(result.values())

# Example usage:
if __name__ == "__main__":
    sol = Solution()
    # Example 1
    input1 = ["act","pots","tops","cat","stop","hat"]
    print(sol.groupAnagrams(input1))
