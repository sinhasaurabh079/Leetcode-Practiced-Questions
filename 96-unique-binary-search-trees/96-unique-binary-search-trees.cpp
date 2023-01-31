class Solution {
public:
    int numTrees(int n) {
        vector<int> C(n+1,0);
        C[0]=1;
        C[1]=1;

        for(int i=2;i<=n;i++){
            C[i]=0;
            // omitting loops over the symmetric path
            for(int j=0;j<i/2;j++){
                C[i] = C[i] + 2*(C[j]*C[i-j-1]);
            }
            if(i&1==1)
               C[i] += C[i/2]*C[i/2];
        }
        return C[n];
    }
};

/*

class Solution {
public:
    int numTrees(int n) {
        vector<int> C(n+1);
        C[0]=1;
        C[1]=1;

        for(int i=2;i<=n;i++){
            C[i]=0;
            for(int j=0;j<i;j++){
                C[i] = C[i] + C[j]*C[i-j-1];
            }
        }
        return C[n];
    }
};
*/
