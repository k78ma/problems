class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        sCounter, tCounter = {}, {}

        if len(s) != len(t):
            return False

        for i in range(len(s)):
            sCounter[s[i]] = sCounter.get(s[i], 0) + 1
            tCounter[t[i]] = tCounter.get(t[i], 0) + 1

        for c in sCounter:
            if sCounter[c] != tCounter.get(c,0):
                return False
        
        return True