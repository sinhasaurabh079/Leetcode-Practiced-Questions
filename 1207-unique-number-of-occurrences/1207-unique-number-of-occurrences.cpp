class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // map<int,int> mp;
        // set<int> s;
        // for(int i:arr){
        //   mp[i]++;
        // }
        // for(auto i:mp){
        //    s.insert(i.second);
        // }
        // return mp.size()==s.size();
        // -------------------------------
        // -1000 <= arr[i] <= 1000 esi range m hongey elements
        // neg no 0-999 ki range m store hongey
        // pos no 1001-2000 ki range m
         int k=1000;
         vector<int> freq(2*k+1,0);
         for(int i:arr)
            freq[i+k]++;

         sort(freq.begin(),freq.end());
        // if cnt is not zero then check two consecutive cnt is same or not
         for(int i=0;i<2*k;i++)
            if(freq[i] && freq[i]==freq[i+1])
               return false;
         return true;                
    }
};