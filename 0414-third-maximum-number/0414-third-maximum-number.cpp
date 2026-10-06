class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int dem = 1;
        int max3 = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] != nums[i + 1]) {
                dem++;
                max3 = nums[i];
                
                if (dem == 3) {
                    return max3;
                }
            }
        }
        return nums[nums.size() - 1];
    }
};