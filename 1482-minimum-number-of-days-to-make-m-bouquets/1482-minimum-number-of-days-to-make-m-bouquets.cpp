class Solution {
public:

    bool ispossible(int mid,vector<int>& bloomDay, int m, int k){
        int count=0;
        int b=0;
        for(int i=0; i<bloomDay.size(); i++){
            if(mid>=bloomDay[i]){
                count++;
                if(k==count){
                    b++;
                    count=0;
                }
            }
            else{
                count=0;
            }
        }
        if(b>=m){
            return true;
        }
        else{
            return false;
        }
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k > bloomDay.size()){
            return -1;
        }
        int start = *min_element(bloomDay.begin(),bloomDay.end());
        int end = *max_element(bloomDay.begin(),bloomDay.end());
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(ispossible(mid,bloomDay,m,k)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};