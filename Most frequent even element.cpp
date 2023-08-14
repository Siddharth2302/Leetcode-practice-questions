class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        map<int,int>m;
        for(int i = 0; i<n ; i++){
            m[nums[i]]++;
        }
        int evenfreq = 0 , ans =-1;
        for(auto y:m){
            if(y.first%2==0 && y.second>evenfreq){
                ans=y.first;
                evenfreq=y.second;
            }
        }
        return ans;
    }
};