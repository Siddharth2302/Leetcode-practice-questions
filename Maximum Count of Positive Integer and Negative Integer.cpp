class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int pos=0;
        int neg=0;
        int mid = 0;
        for(int i = 0; i<n;i++){
            if(nums[i]>mid){
                pos++;
            }
            else if (nums[i]<mid){
                neg++;
            }
        }
        return max(pos ,neg);
        
    }
};
