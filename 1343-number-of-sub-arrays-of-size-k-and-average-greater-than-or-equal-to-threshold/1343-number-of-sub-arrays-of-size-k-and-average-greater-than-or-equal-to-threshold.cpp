class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int st,end;
        int sum=0,avg=0;
        int count=0;
        for(int i=0;i<k;i++)
           sum += arr[i];

         avg = sum/k;
         if(avg>=threshold)
            count++;
        // as we have sum of 1...k-1 elements and now
        // we get cum sum from k to n 
        // avoiding multiple times summation 
        // we are summing next window ele and subtracting prev window 
        // first element in order to get current window sum
        for(st=0,end=k;end<arr.size();st++,end++){
            sum += arr[end] - arr[st];

            avg = sum / k;
            if(avg>=threshold)
               count++;
        }       
       return count; 
    }
};
