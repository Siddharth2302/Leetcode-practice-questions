class Solution {
public:
    bool isPalindrome(int x){
        long int temp=x , rev = 0;
        if(x<0){
            return false;
        }
        while(x>0){
            int rem=x%10;
            x=x/10;
            rev=rev*10+rem;
        }
        if(temp==rev)
            return true;
        
        else
            return false;
        
    }
     
};
