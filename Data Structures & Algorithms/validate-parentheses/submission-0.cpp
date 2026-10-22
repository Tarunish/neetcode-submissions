class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        bool flag=true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
                st.push(s[i]);
            }else if(s[i]==')'||s[i]==']'||s[i]=='}'){
                char t=s[i];
                if(!st.empty() && t==')' && st.top()=='('){
                    st.pop();
                }else  if(!st.empty() && t==']' && st.top()=='['){
                    st.pop();
                } else if(!st.empty() && t=='}' && st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
};
