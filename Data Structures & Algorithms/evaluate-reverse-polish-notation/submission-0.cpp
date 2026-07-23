class Solution {
   
public:
    int evalRPN(vector<string>& s) {
         stack<int> st;
        int i =0;
        int n = s.size();
       for (int i = 0; i < s.size(); i++)
        {
           
             if (s[i] == "+" || s[i] == "-" ||
                s[i] == "*" || s[i] == "/") 
            {
                int t1= st.top();
                st.pop();
                int t2= st.top();
                st.pop();

                if(s[i] == "+")  st.push(t2 + t1);
                 else if(s[i] == "*")  st.push(t2 * t1);
                  else if(s[i] == "-")  st.push(t2 - t1);
                   else if(s[i] == "/")  st.push(t2 / t1);
            }
            else
            {
                st.push(stoi(s[i]));
            }
        }
        return st.top();
    }
};
