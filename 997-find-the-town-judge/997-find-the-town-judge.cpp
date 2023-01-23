class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegree(n+1,0);
        vector<int> outDegree(n+1,0);

        // only one people present he is the judge
        if(trust.empty() && n==1)
           return 1;
        
        // edge[0] is the people who trusts
        // edge[1] is the person who is trusted
        // inDegree[edge[1]] represents that the person is trusts someone
        // outDegree[edge[0]] represents that the person is trusted by people

        for(auto edge:trust)   // auto = vector<int> 
        {
            outDegree[edge[0]]++;  
            inDegree[edge[1]]++;
        }
        // we excluded 0 
        // 1. There are n person and judge should be trusted by n-1 people
        // as his trust to himself is not counted
        // 2. Judge shouldn't trust anyone 
        // assume the question as graph
        // condn 1 => indegree = n-1
        // condn 2 => outdegree = 0
        for(int person=1;person<=n;person++)
        {
            if(outDegree[person]==0 && inDegree[person]==n-1)
               return person;
        }
        return -1;
    }
};

/* other solution
int findJudge(int n, vector<vector<int>>& trust) {
        //this condition is to check if given input is empty but n==1
		
		if(trust.empty() && n==1)
            return 1;
		
		//counts outdegree of a person or node 
		//outdegree means number of nodes that are trusted by given specific node 
        
		vector<int> out(n+1,0);
		
		//counts indegree of a person or node 
		//indegree means number of nodes that trusts a given specific node
        
		vector<int> in(n+1,0);
		
		//loop counts indegree and outdegree
        
		for(auto edge : trust){
            out[edge[0]]++;
            in[edge[1]]++;
        }
		
		//if a node has outdegree==0 that means that node doesnot trust anyone and
		//indegree ==n-1 that means all other nodes trusts this node except himself
        
		for(int i=0;i<=n;i++){
            if(out[i]==0 && in[i]==n-1)
                return i;
        }
		//if there is no such node return -1
        return -1;
    }
*/
    