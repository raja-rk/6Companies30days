class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" or tokens[i]=="-" or tokens[i]=="*" or tokens[i]=="/"){
                long long x=st.top();
                st.pop();
                long long y=st.top();
                st.pop();
                if(tokens[i]=="+"){
                    st.push(x+y);
                }
                else if(tokens[i]=="-"){
                    st.push(y-x);
                }
                else if(tokens[i]=="*"){
                    st.push(x*y);
                }
                else if(tokens[i]=="/"){
                    st.push(y/x);
                }
            }
            else{
                long long z=stoi(tokens[i]);
                st.push(z);
            }
        }
        return st.top();
    }
};