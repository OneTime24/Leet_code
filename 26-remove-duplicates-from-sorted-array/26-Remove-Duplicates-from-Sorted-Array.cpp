class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int cnt=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[cnt]!=nums[i]){


                cnt++;
                swap(nums[cnt], nums[i]);
            }
        }
        return cnt+1;
    }
};