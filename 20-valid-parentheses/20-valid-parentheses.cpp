class Solution {
public:
    bool isValid(string s) {
      if(s.size()==0)
        return false;
      stack<int> stk;
       for(char c:s){
          if(c=='('||c=='{'||c=='[')
             stk.push(c);
          else if( !stk.empty() && ( ( c==')'  && stk.top()=='(' ) ||
                                     ( c=='}'  && stk.top()=='{' ) ||
                                     ( c==']'  && stk.top()=='[' ) )  )  
             stk.pop();  
          else
             return false;                
       }
       if(!stk.empty())
          return false;
      return true;    
    }
};