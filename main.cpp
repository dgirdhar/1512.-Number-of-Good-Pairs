class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        map<int, int> tempMap;
        
        for (int i = 0; i < nums.size(); ++i) {
            map<int, int>::iterator iter = tempMap.find(nums[i]);
            map<int, int>::iterator endIter = tempMap.end();
            
            if (iter != endIter) {
                iter->second++;
                count += iter->second - 1;
            }
            else {
                tempMap.insert(pair<int, int>(nums[i], 1));
            }
        }
        
        return count;
    }
};
