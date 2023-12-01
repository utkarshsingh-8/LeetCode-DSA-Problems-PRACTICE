class Solution {
public:
        bool isValid(string s) {
            
        stack<char> s1;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
            s1.push(ch);
            }

        else {
        if (ch == ')') {
            if (s1.empty() || s1.top() != '(')
            return false;
        }

        if (ch == '}') {
            if (s1.empty() || s1.top() != '{')
            return false;
        }

        if (ch == ']') {
            if (s1.empty() || s1.top() != '[')
            return false;
        }

        s1.pop();
        }
    }

    return s1.empty();
        }
};