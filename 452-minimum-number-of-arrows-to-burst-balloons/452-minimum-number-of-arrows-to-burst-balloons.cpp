class Solution {
public:
    static bool sortbycol(vector<int>& v1,vector<int>& v2)
    {
        // jo bhi 1d vector ayega called function se usko sort karo 
        // on the basis of column if v1[1]<v2[1] is true 
        // otherwise they are already sorted
        return v1[1]<v2[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {

        // agr zero ballons ho tb arrow ki jarurat nhi h
        if(points.size()==0)
           return 0;
        // sorting by column
        sort(points.begin(),points.end(),sortbycol);

        // ek arrow toh chaiye hi h
        int arrow = 1;
        // end m sorted 2d array ka 0th row ka 1th column ka element 
        int end = points[0][1];

        for(int i=0;i<points.size();i++)
        {
            // agar ith row ka pehla element <= end ho tb toh
            // ek hi arrow se kam ho jayega, aur jb esa na ho
            // tb hme aur arrow chahiye and
            // end ko update krna h with [ith row][1st col] for others
            // iteration kuki end hmein 1st col m hi milega 
            if(points[i][0] > end)
            {
                arrow++;
                end = points[i][1];
            }
        }
        return arrow;    
    }
};

/*
Approach : jb tk start<=end ho tb there is a common area in the range 
           of [1 to end] as 2d array is sorted and every next ballon
           has its end >= end of previous base case
           base case = poitns[0][1]

           jb esa na ho tb ek aur arrow chahiye and ab range update 
           hogi with 1st col of wrong condition
*/           
