#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> & arr, int start, int end){
    int sz = (end - start + 1);
    int mid = start + (end - start)/2;

    vector<int> sortedArr(sz);
    int i = start, j= mid +1, index = 0, ans = 0;

    //left -> [start...mid] ==> start = start, end = mid;
    //right -> [mid+1...end] ==> start = mid+1, end = end;

    while(i <= mid && j <= end){
        if(arr[i] > arr[j]){
            //left element > right element
            //we have inversions
            //no, of inversion = (lastIndex of left array - currentIndex of left array + 1)
            //lastIndex of left = mid
            //currentIndex of left = i
            //no. of inversions = (mid - i + 1)
            ans += (mid - i +  1);
            sortedArr[index++] = arr[j++];
        }
        else{
            sortedArr[index++] = arr[i++];
        }

        
    }
    // if elements in the left array still remain
    while(i <= mid){
        sortedArr[index++] = arr[i++];
    }

    //if elements in the right array still remain
    while(j <= end){
        sortedArr[index++] = arr[j++];
    }

    copy(sortedArr.begin(), sortedArr.end(), arr.begin() + start);
    return ans ;


    
}

//exactly same as merge sort
int countInversion(vector<int>& arr, int start, int end){
    if(start >= end){
        return 0;  //base case
    }
    int mid = start + (end - start)/2;
    // int mid = (start + end)/2;
    int leftInversions = countInversion(arr, start, mid);
    int rightInversions = countInversion(arr, mid+1, end);
    int crossinversions = merge(arr, start, end);
    return leftInversions + rightInversions + crossinversions;

}

int main(){
    // vector<int> arr = {2, 4, 1, 3, 5};
    vector<int> arr = {2, 4, 1, 5, 3};
    // vector<int> arr = {2, 3, 4, 5, 6};

    int start = 0, end = arr.size() -1;

    // int ans = countInversion(arr, 0, arr.size() - 1);
    int ans = countInversion(arr, start, end);
    cout<<"Inversion count of the array is: "<<ans<<endl;

    return 0;
}