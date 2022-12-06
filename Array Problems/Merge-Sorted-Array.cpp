/*

*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        int k=0;
        vector<int> nums3(m+n);
        // jb tk dono array m elements same h tb tk ye 
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])    // num1 m chota element ho tb ye
            {
                nums3[k++]=nums1[i++];
            }
            else
            {
                nums3[k++]=nums2[j++];  // vrna num2 wala
                cout<<j<<" ";
            }
        }

        // fir bache hoye sorted elements ko dal diya
        // agr num1 jyada element ho tb
        // i,j,k ki value latest hogi upr se

        while(i<m)
        {
           nums3[k++]=nums1[i++]; 
        }
        while(j<n)
        {
            nums3[k++]=nums2[j++];
        }
        // saare elements aa gye yha tk
        nums1=nums3;
    }
    
};

// last m bda element dalte huye
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(i>=0)
            nums1[k--]=nums1[i--];
        while(j>=0)
            nums1[k--]=nums2[j--];
    }

// using sort stl

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       for(int i=0;i<n;i++)
       {
          nums1[i+m]=nums2[i];
       }
       sort(nums1.begin(),nums1.end());
    }
};
