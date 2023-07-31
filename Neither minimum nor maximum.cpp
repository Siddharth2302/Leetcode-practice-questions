class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n<=2){
            return -1;
        }
        int mini=nums[0];
        int maxi=nums[n-1];
        int ans=0;
        for(int i = 0;i<n;i++){
            if(nums[i]!=mini && nums[i]!=maxi){
                ans=nums[i];
            }
        }
        return ans;
        

        
    }
};
