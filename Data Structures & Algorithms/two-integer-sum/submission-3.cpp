class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;

        for(int i=0; i<nums.size(); i++) {
            int comp = target - nums[i];

            if(mpp.find(comp) != mpp.end()) {
                vector<int> res;
                res.push_back(mpp.find(comp)->second);
                res.push_back(i);
                return res;
            }

            mpp[nums[i]] = i;
        }
        
    }
};