**Link:** https://leetcode.com/problems/valid-parentheses/

Solution: Populate a stack to keep track of opening brackets. Every time a closing bracket is detected, check if the top of the stack is the correct corresponding bracket. If it is - pop the top of the stack. If it's not, the return false.