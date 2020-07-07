

/* Main idea of the problem

1. HashTable helps in giving O(1) lookups.
2. Doubly Linked List gives O(1) removals because only links have to be changed. To directly reach the node,
   store them in the hash table along with the value.

Important details
1. If a key is already there and it is again being inserted with a new value, you have to replace that key with the new value.
   In order to do this, one is supposed to delete the already existing key value pair and then insert the new one.
   The capacity of the hashtable will remain the same in this operation.
2. If we lookup a value, then we find it's current position in the DLL and remove it. We add that key to 
   to the front because its now the most recently used value. 
   So, we need to re-insert it into hashtable with new iterator address and of course, we need to remove 
   previous occurence from the DLL and lookup table and create a new one.
3. If capacity of hashtable is full, it's time to simply delete the last key in the DLL. 
4. If you check after pushing, then c > capacity otherwise c == capacity 
*/



class LRUCache {
public:
    unordered_map<int, pair<list<int>::iterator, int>> lookup;
    list<int> eviction;
    int c;
    LRUCache(int capacity) {
        c = capacity;
        lookup.clear();
        eviction.clear();
    }
    
    int get(int key) {
        auto it = lookup.find(key);
        if(it == lookup.end())return -1; // Not present in the map
        
        int val = it->second.second; // fetch the value
        
        // Need to erase it's current entry and add new entry in queue
        eviction.erase(it->second.first); 
        lookup.erase(key);
        
        //Add newer entry
        eviction.push_front(key);
        lookup[key] = make_pair(eviction.begin(), val);
        
        return val;
        }
    
    
    void put(int key, int value) {
        
   
        if(lookup.find(key) != lookup.end()) 
        {
            eviction.erase(lookup[key].first);
            lookup.erase(key);
        }
            if(lookup.size() == c) // If capacity already reached, need to evict
        {
            lookup.erase(eviction.back());// remove the last element            
            eviction.pop_back();
        }
        //Inserting
        eviction.push_front(key);
        lookup[key] = make_pair(eviction.begin(), value);
     
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
