class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(cnt==0){
                ans=nums[i];
                cnt++;
            }
            else if(ans==nums[i]){
                cnt++;
            }
            else cnt--;
        }

        cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ans) cnt++;
        }

        if(ans>n/2) return ans;
    }
};