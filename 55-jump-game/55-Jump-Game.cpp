class Solution {
public:
    bool canJump(vector<int>& nums) {

        int  currjump=0;

        if(nums.size()==1) 
            return true;

        for(int i=0;i<nums.size()-1;i++){

            currjump=max(nums[i],currjump-1);

            if(currjump==0 ) return false;
        }
        return true;
    }
};