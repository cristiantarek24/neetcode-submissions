class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 , r = (int)nums.size() - 1;
        while(l <= r){
            int md = l + (r - l) / 2;
            if(nums[md] == target) return md;

            if(target > nums[md]) l = md + 1;
            else r = md - 1;
        }
        return -1;
    }
};
