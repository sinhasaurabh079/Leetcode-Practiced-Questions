//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    void solve(vector<int>& v, int k, int index){
        if(v.size() == 1){
            return;
        }
        index = (index + k) % v.size();
        v.erase(v.begin()+index);
        solve(v,k,index);
        
    }
    int josephus(int n, int k){
       vector<int> v(n,0);
       for(int i=0;i<n;i++){
           v[i] = i+1;
       }
       solve(v,k-1,0);
       return v[0];
    }
};

//   0 to n-1
//   if(n == 1){
//       return 1;
//   }
//   int x = josephus(n-1,k);
//   int y = ((x+k-1) % n)+1;
//   return y;

//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends