class Solution:
    def alphaNum(self, c: chr) -> bool:
        return ((ord ('A') <= ord(c) <= ord('Z')) or
        (ord ('a') <= ord(c) <= ord('z')) or
        (ord ('0') <= ord(c) <= ord('9')))

    def isPalindrome(self, s: str) -> bool:
        l, r = 0, len(s)-1

        while l < r:
            while l < r and not self.alphaNum(s[l]):
                l+=1
            while l < r and not self.alphaNum(s[r]):
                r-=1
            if s[l].lower() != s[r].lower():
                return False
            l = l + 1
            r = r - 1

        return True   
        