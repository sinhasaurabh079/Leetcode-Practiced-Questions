class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int sum_of_gas=0;
        int sum_of_cost=0;
        
        for(auto x:gas)
           sum_of_gas += x;
        for(auto x:cost)
           sum_of_cost += x;
        // agr sumOfGas chota hua toh required gas nhi h
        if(sum_of_gas < sum_of_cost)
            return -1;

        // agr sum of gas >= sum of cost
        // tb toh soln exist krega
        int total=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            total += gas[i] - cost[i];
            // agr total negative huya kisi gas station pr
            // tlb wo toh starting position nhi ho skta
            // then we check for other gas station
            if(total < 0){
                total = 0;
                start = i+1;
            }
        }
       return start;
    }
};