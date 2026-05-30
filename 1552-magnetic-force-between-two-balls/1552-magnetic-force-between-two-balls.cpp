class Solution {
public:
    
    bool ispossible(int force,vector<int>& position, int m,int n){
        int ballcount=1;
        int prev = position[0];
        for(int i=0; i<n; i++){
            if(position[i]-prev >= force){
                ballcount++;
                prev =position[i];
            }
        }
        if(ballcount>=m){
            return true;
        }
        else{
            return false;
        }
    }


    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());
        int start = 1;
        int end = position[n-1]-position[0];
        int ans=0;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(ispossible(mid,position,m,n)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;

    }
};