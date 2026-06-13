class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {


        // unordered_map<int,int>freq;

        // for(int i=0; i<nums.size(); i++){
        //     freq[nums[i]]++;
        // }

        // vector<int>ans;
        // for(auto it:freq){
        //     if(it.second >= 2){
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans;


        //++++++++++++ optimal ++++++++
      
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;

            if(nums[index] < 0) {
                ans.push_back(abs(nums[i]));
            }
            else {
                nums[index] = -nums[index];
            }
        }

        return ans;
    



    }
};