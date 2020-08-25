class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        int arr[101] = {0};
        
        for (int i = 0; i < nums.size(); ++i) {
            arr[nums[i]]++;
            
            count += arr[nums[i]] - 1;
        }
        
        return count;
    }
};
