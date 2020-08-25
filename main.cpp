class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> tempMap;
        
        for (int i = 0; i < nums.size(); ++i) {
            tempMap[nums[i]]++;
            count += tempMap[nums[i]] - 1;     
        }
        
        return count;
    }
};
