class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(char c: s){
            m1[c]++;
        }
        for(char c: t){
            m2[c]++;
        }
        bool ans = true;
        for(auto it : m1){
            if(m1[it.first] != m2[it.first]){
                ans = false;
                break;
            }
        }
        return ans;
    }
};