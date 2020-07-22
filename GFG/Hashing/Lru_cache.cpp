class LRUCache
{
private:

public:
   unordered_map<int, pair<list<int>::iterator,int>> m;
     list<int> l;
     int capacity;
    LRUCache(int cap)
    {
        // constructor for cache     int capacity;   

        capacity = cap;
        m.clear();
        l.clear();
    }
    
    int get(int key)
    {
        // this function should return value corresponding to key
        if(m.find(key) != m.end())
        {
            int val = m[key].second;
            auto it = m[key].first;
            l.erase(it);
            m.erase(key);
            
            l.push_front(key);
            m[key] = {l.begin(), val};
            return val;
        }
        else
        {
            return -1;
        }
    }
    
    void set(int key, int value)
    {
       if(m.find(key) != m.end())
        {
            l.erase(m[key].first);
            m.erase(key);
            
            l.push_front(key);
            m[key] = {l.begin(), value};
        }
        
    if(m.find(key) == m.end())
        {
            l.push_front(key);
            m[key] = {l.begin(), value};
        }
        if(m.size() > capacity)
        {
            auto it = m[l.back()].first;
            m.erase(l.back());
            l.erase(it);
        }
    }
        
};
