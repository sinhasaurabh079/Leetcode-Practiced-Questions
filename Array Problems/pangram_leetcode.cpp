class Solution {
public:
    bool checkIfPangram(string sentence) {
       //Array 'seen' of type bool and size 26
        array<bool,26> seen{};
        //currChar current character
        for(auto currChar : sentence)
            seen[currChar-'a']=true;
        
        //after iteration checking do ther is any character i.e., is not present in the sentence
        // ex : leetcode will feel 8 corressponding cells with true and other will be false and when we check status other places will be false and hence we can hace the pangram
        // pangram a sentence having all the letter from a-z in both cases
         for(auto status : seen)  // status se traverse kr rhe h seen array ko
             if(!status) //jo nhi hoga wo false (!false)=(true)
                 return false;
        return true;
    }
};
