class MyHashSet {
public:
    unordered_set<int> uset;
        
    MyHashSet() {
        
    }
    
    void add(int key) {
        uset.insert(key);
    }
    
    void remove(int key) {
        if(uset.find(key)!=uset.end()){
            uset.erase(key);
        }
    }
    
    bool contains(int key) {
         if(uset.find(key)!=uset.end()){
           return true;
        }else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */