class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char , int> sFreq , tFreq;

        if(s.length() != t.length()) return false;

        for(int i = 0; i < s.length(); i++){
            sFreq[s[i]] ++;
            tFreq[t[i]] ++;
        }

        for(auto &[x , fr] : sFreq){
            if(fr != tFreq[x]) return false;
        }
        for(auto &[x , fr] : tFreq){
            if(fr != sFreq[x]) return false;
        }

        return true;
    }
};
