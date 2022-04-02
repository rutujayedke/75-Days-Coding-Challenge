class RandomizedSet {
public:
    vector <int> v;
    unordered_map<int, int> m;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(m.find(val) != m.end()){
            return false;
        }
        int index = v.size();
        v.push_back(val);
        m.insert(pair<int, int>(val, index));
        
    return true;
    }
    
    bool remove(int val) {
        if (m.find(val) == m.end()) return false;
        int last = v.back();
        m[last] = m[val];
        v[m[val]] = last;
        v.pop_back();
        m.erase(val);
        return true;
    }
    
    int getRandom() {
        
        int random_index = rand() % v.size();
             
        return v[random_index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */