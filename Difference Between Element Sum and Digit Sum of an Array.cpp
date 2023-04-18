class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i  = 0 ; i<nums.size() ; i++){
            sum1 = sum1 + nums[i];
        int d = nums[i];
        while(d>0){
            sum2=sum2+d%10;
             d = d/10; 
        }
        }
        return  abs(sum1-sum2);
        
    }
};
