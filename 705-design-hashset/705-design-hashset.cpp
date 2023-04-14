class MyHashSet {
public:
    // lets use chaining to improve space efficiency
    vector<list<int>> m;
    int siz;
    MyHashSet() {
       siz = 10007;      // sz inc collision reduces and vice versa
       m.resize(siz);
    }
    // m[idx] is used because each array cell acts as head of doubly linked list

    int hash(int key){  // gives hash_idx (here named as idx)
      return key%siz;
    }
// list is doulbly ll stl func
    list<int> :: iterator search(int key){
      int idx = hash(key);
      // it gives posn of key in list
      return find(m[idx].begin(),m[idx].end(),key);
    }
    
    void add(int key) {
      if(contains(key))  return;
      // agr nhi h list m tb idx pta kro insertion ka and waha daldo
      int idx = hash(key);
      m[idx].push_back(key); 
    }
    
    void remove(int key) {
      if(!contains(key)) return;
      int idx = hash(key);
      m[idx].erase(search(key));       // search() gives posn
        
    }
    
    bool contains(int key) {
        int idx = hash(key);
        if(search(key) != m[idx].end())
            return true;
        else
            return false;
    }
};

/*
class MyHashSet {
public:
// this will bottleneck for size > 1e7
    vector<int> max;
    int siz;
    MyHashSet() {
      siz = 1e6+1;
      max.resize(siz);  
    }
    
    void add(int key) {
        max[key] = 1;
    }
    
    void remove(int key) {
        max[key] = 0;
    }
    
    bool contains(int key) {
        return max[key];
    }
};
*/
/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */