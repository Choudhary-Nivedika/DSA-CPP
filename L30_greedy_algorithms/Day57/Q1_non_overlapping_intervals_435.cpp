#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int eraseOverlapIntervals(vector<pair<int,int>>& intervals){
    sort(intervals.begin(), intervals.end(), [](auto& a, auto& b){
        return a.second < b.second ;
    });
    
    int count=0, lastEnd = INT_MIN;
    for(auto& curr : intervals){
        if(curr.first >= lastEnd){
            count++;
            lastEnd = curr.second;
        }
    }
   
    return intervals.size() - count;
}

int main(){
    int n = 4;
    vector<pair<int, int>> intervals(n, make_pair(0, 0));
    intervals[0] = make_pair(1, 2);
    intervals[1] = make_pair(2, 3);
    intervals[2] = make_pair(3, 4);
    intervals[3] = make_pair(1, 3);

    cout<<eraseOverlapIntervals(intervals);
    
    return 0;
}