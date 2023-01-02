class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        int m = nums1.size();
        int n = nums2.size();
        vector<int> nums3(m+n);
        //int k=0;
        int i,j;

        // terminating loop if any of array is traversed
        for(i=0,j=0;i<m && j<n;)
        {
            if(nums1[i]<nums2[j])
            {
                nums3[i+j] = nums1[i];   // k=i+j if any of i increases k increases
                i++; 
            }
            else
            {
                nums3[i+j] = nums2[j];  // k=i+j
                j++;
            }
        }
        
        // if nums1 element left for merging
        while(i<m)
        {
            nums3[i+j] = nums1[i];
            i++;
        }

        // if nums2 element left for merging
        while(j<n)
        {
            nums3[i+j] = nums2[j];
            j++;
        }

        if( (m+n)%2 != 0)   // odd no of elements present
           return nums3[(m+n)/2];
        else
           return ( nums3[(m+n+1)/2] + nums3[(m+n-1)/2] )/2.0;
    }
};