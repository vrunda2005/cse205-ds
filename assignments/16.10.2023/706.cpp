class MyHashMap {
public:
    unordered_map<int,int> umap;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        umap.insert(make_pair(key,value));
    }
    
    int get(int key) {
        //  if(umap.find(key)!=umap.end()){
        //  int temp=umap[key];
        //  return temp;
        //  }
        // else return 0;
        return umap[key];
    }
    
    void remove(int key) {
         if(umap.find(key)!=umap.end()){
           umap.erase(key);            
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */