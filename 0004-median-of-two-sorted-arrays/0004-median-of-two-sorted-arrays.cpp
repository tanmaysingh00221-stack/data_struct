class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int sz1=nums1.size();
       int sz2=nums2.size();
       int total=sz1+sz2;
       
       vector<int> vec;
       int i=0;
       int z=0;
       double x;
       while(i<sz1 && z<sz2){
        if(nums1[i]>nums2[z]){
            vec.push_back(nums2[z]);
            z++;

        }
        else{
            vec.push_back(nums1[i]);
            i++;
        }
       }
       if(z==sz2){
         for(int m=i;m<sz1;m++){
            vec.push_back(nums1[m]);
        }
       }
        if(i==sz1){
         for(int m=z;m<sz2;m++){
            vec.push_back(nums2[m]);
        }
       }
       if(total%2==0){
         x=(vec[total/2]+vec[(total/2)-1])/2.0;
       }
       else{
         x=vec[total/2];
       }
       return x;

      
    }
};