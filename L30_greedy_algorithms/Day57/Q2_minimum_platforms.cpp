#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minPlatform(vector<int>& arr, vector<int>& dep){
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int p1 = 0;
    int p2 = 0;
    int currTrains = 0, platforms = 0;

    while(p1 < arr.size()){
        if(arr[p1] <= dep[p2]){
            currTrains++;
            platforms = max(platforms, currTrains);
            p1++;

        }else{
            currTrains--;
            p2++;
        }
    }

    return platforms;
}

int main(){

    int vector<int> arr= [900, 940, 950, 1100, 1500, 1800];
    int vector<int> dep= [910, 1200, 1120, 1130, 1900, 2000];
    
    return 0;
}