class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        bool ans = false;
        for(auto it : m){
            if(it.second>1){
                ans = true;
                break;
            }
        }
        return ans;
    }
};