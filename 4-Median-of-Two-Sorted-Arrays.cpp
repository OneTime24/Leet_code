class Solution {
public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

       
        vector<int> tmp;
        float res;

       int i=0,j=0;
       while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            tmp.push_back(nums1[i++]);
        }else{
            tmp.push_back(nums2[j++]);
        }
       }
       while(i<nums1.size()){
        tmp.push_back(nums1[i++]);
       }
       while(j<nums2.size()){
        tmp.push_back(nums2[j++]);
       }


       int n=tmp.size();
       
       if(n%2==0){

            return (tmp[n/2] + tmp[n/2 - 1]) / 2.0;
       }else{
        return tmp[n/2];
       }

       return 0.0;
    }

};