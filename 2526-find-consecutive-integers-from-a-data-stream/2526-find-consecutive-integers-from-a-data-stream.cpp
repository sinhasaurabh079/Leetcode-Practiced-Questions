class DataStream {
public:
 
      int n, x, cnt;

    DataStream(int value, int k) {

        n = value, x = k, cnt = 0;

        
    }
    
    bool consec(int num) {
        num != n ? cnt = 0 : cnt++;

        return cnt >= x;

    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */