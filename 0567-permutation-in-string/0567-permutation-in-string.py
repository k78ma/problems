class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        
        if len(s1) > len(s2):
            return False

        s1_count, window_count = {}, {}
        
        for ch in s1:
            s1_count[ch] = s1_count.get(ch, 0) + 1

        for i in range(len(s2)):
            window_count[s2[i]] = window_count.get(s2[i], 0) + 1

            if i >= len(s1):
                if window_count[s2[i - len(s1)]] == 1:
                    del window_count[s2[i - len(s1)]]
                else:
                    window_count[s2[i - len(s1)]] -= 1

            if window_count == s1_count:
                return True

        return False
