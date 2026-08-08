class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int target = n/2;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0; i<n; i++){
            int count = 1;
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j]){
                    count++;
                }
                if(count>target){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};