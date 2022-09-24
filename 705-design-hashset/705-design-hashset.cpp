class MyHashSet {
    
public:
    vector<list<int>> mp;
    int size = 100;
    MyHashSet() {
        mp.resize(size);
    }
    int hash(int key){
        return key % size;
    }
    void add(int key) {
        int i = hash(key);
        mp[i].push_back(key);
    }
    
    void remove(int key) {
        int i = hash(key);
        mp[i].remove(key);
    }
    
    bool contains(int key) {
        int i = hash(key);
        for(auto x : mp[i]){
            if(x == key){
                return true;
            }
            
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */