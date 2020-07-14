
/*
Main idea
1. Use a maxheap to maintain the first half of array. This way, you will always have the mid available at the top.
2. Use a minheap to keep track of the second half of the array.

How to do this?
We compare the new element with maxheap.top(), if it is smaller, then it certainly belongs to the lower part of 
the array. Otherwise it goes to the minheap.

Balancing 
If there is a size difference of more than two, then pop out one element from the heap having 
more elements and push that element into the smaller heap.

Finding Median
If the size of the list is even, then take half of sum of both the tops.
Otherwise, just return the heap's top which is having more elements.

*/




class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int,vector<int>, greater<int>> minheap;
    priority_queue<int> maxheap;
    MedianFinder() {
        while(!minheap.empty())minheap.pop();
        while(!maxheap.empty())maxheap.pop();
    }
    
    void addNum(int num) {
       

        if(minheap.empty() && maxheap.empty())
        {
            minheap.push(num);return;
        }
        if(!maxheap.empty() && num <= maxheap.top())
        {
            maxheap.push(num);
        }
        else 
        {
            minheap.push(num);
        }
        
        if((int)maxheap.size() - (int)minheap.size() >= 2)
        {
            
            minheap.push(maxheap.top());
            maxheap.pop();
        }
        else if((int)minheap.size() - (int)maxheap.size() >= 2)
        {
           
            maxheap.push(minheap.top());
            minheap.pop();
        }
        
    }
    
    double findMedian() {
        int n = (int)minheap.size() + (int)maxheap.size();
        if( n % 2 == 0 && n != 0){
            int med = minheap.top() + maxheap.top();
            return (med)/2.0 ;
        }
        else{
            double res  = minheap.size() >  maxheap.size() ? minheap.top() : maxheap.top();
            return res;
        }
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
