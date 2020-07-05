/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 */
 
 Case of overlapping interval
      a--------------b
  c----------------------d
  
  
  a---------------b
        c----------------d
 We can observe that in both the cases, b > c i.e i1.end > i2.start

*/
 
vector<Interval> Solution::insert(vector<Interval> &arr, Interval ni) {
  
    // If array size is 0, then add the new interval and return
    if(arr.size() == 0) 
    {
        arr.push_back(ni);
        return arr;
    }
    int i = 0;
    vector<Interval> res; // Return this
    int flag =0;
    while(i < arr.size())
    {   
        // If newInterval.start > interval[i].end, this means they are not overlapping
        if(ni.start  > arr[i].end)
        {
            res.push_back(arr[i]);
            i++;
            continue;
        }
        else if(ni.end >= arr[i].start )
        {
            ni.start = min(ni.start, arr[i].start);
            ni.end = max(ni.end, arr[i].end);
            i++;
            // arr.erase(arr.begin() + i); Using this times out since it makes the algo O(n^2)
        }
        else {
                res.push_back(ni);
                flag = 1; 
                // arr.insert(arr.begin() + i, ni);
                while(i<arr.size())
                {
                    res.push_back(arr[i]);
                    i++;
                }
                break;            
        }
    }
    if(i == arr.size() && flag == 0) // If New interval's starting time is highest or it is to be added at end
    {
        res.push_back(ni);
    }
    
    return res;
}
