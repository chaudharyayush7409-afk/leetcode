class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int>s;
        s.push(-1);
        vector<int>ans(n,-1);
        for(int i=2*n-1; i>=0; i--){
            int num = nums[i%n];
            while(!s.empty() && num >= s.top()){
                s.pop();
            }
            if(i<n && !s.empty()){
                ans[i] = s.top();
            }
            s.push(num);
        }
        return ans;
    }
};