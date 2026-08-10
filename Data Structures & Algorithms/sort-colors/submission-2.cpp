class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int z=0, o=0, t=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) z++;
            if(nums[i]==1) o++;
            if(nums[i]==2) t++;
        }
        int ind=0;
        for(int i=0;i<z;i++){
            nums[ind]=0;
            ind++;
        }
        for(int i=0;i<o;i++){
            nums[ind]=1;
            ind++;
        }
        for(int i=0;i<t;i++){
            nums[ind]=2;
            ind++;
        }
    }
};
