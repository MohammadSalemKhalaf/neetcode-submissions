class Solution {
public:
        bool isValid(string &s) {
            // string s2;
            stack<char> st;
            for (char c : s) {
                st.push(c);
            }

            for (int i =0; i < s.length(); i++) {
                char c = st.top();
                st.pop();
                if (s[i] == '(' && c != ')') return false;
                else if (s[i] == '{' && c != '}') return false;
                else if (s[i] == '[' && c != ']') return false;
                
            }
            return true;
         }
};
