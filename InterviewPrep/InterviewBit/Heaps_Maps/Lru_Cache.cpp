#include <list>
#include <unordered_map>

unordered_map<int, pair<list<int>::iterator,int>> m;
list<int> l;
int c;

LRUCache::LRUCache(int capacity) {
    m.clear();
    l.clear();
    c = capacity;
}

int LRUCache::get(int key) {
    auto it = m.find(key);
    if(it == m.end())
        return -1; // Not in the lookup table
    
    int val = it->second.second; // take the value
    // Erase this value from the lookup table and list 
    l.erase(it->second.first);
    m.erase(key);
    
    // Add new value i.e to bring it as more recent 
    // First add in DLL
    l.push_front(key);
    m[key] = make_pair(l.begin(), val);
    
    return val;
}

void LRUCache::set(int key, int value) {
    
    //Handle the case when key already in table
    if(m.find(key) != m.end())
    {
        l.erase(m[key].first);
        m.erase(key);
    }

    if(c == m.size())
    {
        m.erase(l.back());
        l.pop_back();
    }
    l.push_front(key);
    m[key] = make_pair(l.begin(), value);
    

}
