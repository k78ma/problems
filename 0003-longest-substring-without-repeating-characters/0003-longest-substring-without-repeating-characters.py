class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        maxLength = 0

        for i in range(len(s)):
            strSet = set()
            currentLength = 0

            for j in range(i, len(s)):
                if s[j] in strSet:
                    break  
                    
                strSet.add(s[j])
                currentLength += 1

            maxLength = max(maxLength, currentLength)

        return maxLength
            
            