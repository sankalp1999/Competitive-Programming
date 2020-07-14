/* Heapsort of distance from origin which is actually just 
sum of square of x and y co-ordinates.
Notice the use of minheap as we want to get the closest first.
The value that you want to sort according should be the first value.
*/


class Solution {
public:
    typedef pair<int,pair<int,int>> pii;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<pii,vector<pii>, greater<pii>> pq;
        for(int i = 0; i < points.size(); i++){
            int square = points[i][0] * points[i][0] +  points[i][1] * points[i][1];
            pq.push({square, {points[i][0], points[i][1]}});
        }
        vector<vector<int>> res;
        while(K--){
            auto idx = pq.top();
            pq.pop();
            res.push_back(vector<int> {idx.second.first, idx.second.second});
        }
        return res;
        
    }
};
