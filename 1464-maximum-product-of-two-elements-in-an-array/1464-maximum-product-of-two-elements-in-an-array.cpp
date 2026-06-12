class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = -1;
        int secondlargest = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>largest){
                secondlargest = largest;
                largest = nums[i];
            }
            else if(nums[i]>secondlargest){
                secondlargest = nums[i];
            }
        }
        int result = (largest-1)*(secondlargest-1);
        return result;
    }
};