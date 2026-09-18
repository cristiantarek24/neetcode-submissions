class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int> seen;
        vector<int> ans;

        for(int i = 0; i < (int)nums.size(); i++){
            if(seen[target - nums[i]]){
                ans.push_back(seen[target - nums[i]] - 1);
                ans.push_back(i);
                return ans;
            }
            seen[nums[i]] = i+1;
        }
        return ans;
    }
};
