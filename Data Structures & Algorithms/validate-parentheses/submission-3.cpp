class Solution {
public:
  bool isValid(string &s) {
            stack<char> st;
            for (char c : s) {
                if (c == '(' || c == '{' || c == '[') {
                    st.push(c);
                }
                else if (st.empty()) {return false;}
                else if ((c == ')' || c == '}' || c == ']')&& !st.empty()) {
                    if ( st.top() == '(') {
                        if (c == ')') st.pop();
                        else return false;
                    }
                    else if ( st.top() == '{') {
                        if (c == '}') st.pop();
                        else return false;
                    }
                    else if ( st.top() == '[') {
                        if (c == ']') st.pop();
                        else return false;
                    }
                    else { return false; }
                }
            }

            if (!st.empty())return false;
            else return true;
         }
};
