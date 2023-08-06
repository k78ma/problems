#include <iostream>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> s_stack;

        for (char i : s){

            if (i == '(' || i == 
            '{' || i == '['){
                s_stack.push(i);
            }

            else{
                if (s_stack.empty())
                    return false;
                
                if (i == ')' && s_stack.top() == '(')
                    s_stack.pop();
                
                else if (i == '}' && s_stack.top() == '{')
                    s_stack.pop();
                
                else if (i == ']' && s_stack.top() == '[')
                    s_stack.pop();
                
                else
                    return false;
                
            }
        }
        return s_stack.empty();
    }
};

int main() {
    Solution s;
    std::cout << s.isValid("()") << std::endl;
    std::cout << s.isValid("()[]{}") << std::endl;
    std::cout << s.isValid("(]") << std::endl;
    std::cout << s.isValid("([)]") << std::endl;
    std::cout << s.isValid("{[]}") << std::endl;
    return 0;
}