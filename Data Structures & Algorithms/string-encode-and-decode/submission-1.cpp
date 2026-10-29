class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(auto& st : strs){
            s += to_string(st.length()) + "#" + st;
        }
        cerr << s;
        return s;
    }

    vector<string> decode(string s) {
        
        vector<string> ans;
        int i = 0;
        while(i < s.length()){
            int n = 0;
            
            while(i < s.length() and isdigit(s[i])){
                n *= 10;
                n += s[i ++] - '0';
            }
            i ++;
            ans.push_back(s.substr(i, n));
            i += n;
        } 
        return ans;
    }
};
