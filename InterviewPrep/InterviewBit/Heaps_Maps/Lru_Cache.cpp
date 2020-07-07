#include <list>
#include <unordered_map>

/* 
LeetCode implementation uses better variables. So, check out that.

Main idea of the problem
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
