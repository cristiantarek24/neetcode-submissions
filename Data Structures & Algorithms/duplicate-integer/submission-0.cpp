class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set <int> s;
        for(int i = 0; i < nums.size(); ++i)
            s.emplace(nums[i]);
        return s.size() < nums.size(); 
    }
};